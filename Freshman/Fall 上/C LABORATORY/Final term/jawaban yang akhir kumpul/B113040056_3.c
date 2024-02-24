#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int validPalindrome(char s[]) {
	// 請填空此函式
	
	char string[100];
	
	
	
	int i;
	int length = strlen(s);
	length = length -2;
	int indexx = 0;
	for(i = 0; i <= length; i++)
	{
		if(!isalpha(s[i]) && s[i] != ' ')
		{
			s[i] = 'X';
			
		}
		else if (s[i] == ' ')
		{
			
		}
		else
		{
			s[i] = tolower(s[i]);
			string[indexx] = s[i];	
			indexx++;
		}
		
		
	}
	string[indexx] = '\0';
	
	//printf("|%s|", string);
	
	
	char reversed[100] =  {'\0'};
	//printf("Index brp skrg %d\n", indexx);
	int temp = indexx - 1;
	for (i = 0; i <= indexx; i++)
	{
		reversed[i] = string[temp];
		temp--;
	}
	//printf("reversed string %s|\n", reversed);
	
	
	if (strncmp(string, reversed, temp) == 0)
	{
		//printf("bener\n");
		return 1;
	}
	else 
	{
		//printf("salah\n");
		return 0;
	}
//	printf("length of the strnig %d", length);
//	printf("array ke 11 %c\n", s[length]);
	//printf("||%sisia pa ani n||",s);
	//return 0;
}

int main(int argc, char *argv[]) {
	FILE *file = fopen("3.txt","r");
	int result;
	char s[100];

	while(1) {
		fgets(s,100,file);
		if(feof(file)) break;
		result = validPalindrome(s);
		printf("%s\n", result ? "true" : "false");
	}
	return 0;
}

