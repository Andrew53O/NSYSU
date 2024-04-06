#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#define TRUE 1

int find_and (char **argv);
void execute (char **argv, int pnum);
int scanline (char *line, char **argv);
void pipeline (char **process1, char **process2, int pnum);
void cd(char *path);

int main ()
{
	int p = 0;
	char line[1024];
	char *argv[64]={0};

	while (TRUE)
	{ 	
		char* usrname = getenv("USER");
		char cwd[1024];
		getcwd(cwd,sizeof(cwd));
		printf ("\n%s@custShell:", usrname);
		printf("~%s$ ", cwd);
		p = scanline (line, argv);
		if (!strcmp (argv[0], "exit"))
			exit (0);
		else if (*argv[0] == '\0')
			continue;
		if (strcmp(line, "cd") == 0)
		{
		    if (line == NULL)
		    {
		        printf("cd: missing argument\n");
		    }
		    else
		    {
		        cd(line);
		    }
		    continue;
		}
		execute (argv, p);
	}
	return 0;
}

void cd(char *path)
{
	if (chdir(path) != 0)
	{
        	printf("cd: %s: No such file or directory\n", path);
	}
}

void execute (char **argv, int pnum)
{
	int status;
	int if_and = find_and (argv);

	pid_t pid = fork ();
	if (pnum > 1 && !pid)
	{
		char **argv2 = argv;
		while (*(argv2+1))
			argv2++;
		pipeline (argv, argv2+2, pnum-1);
		return ;
	}

	if (pid)
	{
		if (!if_and)
			while (wait (&status) != pid);
	}
	else
	{
		execvp (*argv, argv);
		printf ("%s: command not found\n", argv[0]);
		exit (TRUE);
	}

}

int scanline (char *line, char **argv)
{
	int pnum = 1;
	while (TRUE)
	{
		do
		scanf ("%c", line);
		while((*line == ' ' || *line == '\t') && *line != '|');

		*argv++ = line;
		
		if (*line == '\n')
			break;
		else if (*line == '|')
		{				
			pnum += 1;
			*(argv-1) = 0;
			continue;
		}

		do
		{
			line++;
			scanf ("%c", line);		
		}while (*line != ' ' && *line != '\t' && *line != '\n' && *line!='|');

		if (*line == '\n')
			break;
		else if (*line == '|')
		{
			pnum += 1;
			*argv++ = 0;
		}
		*line++ = '\0';
	}

	*line = '\0';
	*argv = 0;
	return pnum;
}

int find_and (char **argv)
{
	while (*(argv+1))
		argv++;
	if (!strcmp(*argv, "&"))
	{
		*argv = 0;
		return 1;
	}
	return 0;
}

void pipeline (char **process1, char **process2, int pnum)
{
	int fd[2];
	pipe (&fd[0]);

	if (fork ())
	{
		close (fd[0]);
		close (1);
		dup (fd[1]);
		close (fd[1]);
		execvp (*process1, process1);
	}
	else
	{
		close (fd[1]);
		close (0);
		dup (fd[0]);
		close (fd[0]);

		if (pnum > 1)
		{
			char **argv2 = process2;
			while (*(argv2+1))
				argv2++;
			pipeline (process2, argv2+2, pnum-1);
			return ;
		}
		else
			execvp (*process2, process2);
	}
}
