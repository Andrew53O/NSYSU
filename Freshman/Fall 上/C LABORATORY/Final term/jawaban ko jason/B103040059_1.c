#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rotateString(char s[],char goal[]){
	int len_s, len_goal;
	len_s = strlen(s);
	len_goal = strlen(goal);
	if(len_s == len_goal){
		int i, j, counter;
		strcat(s,s);
		for(i = 0; i < len_s; i++){
			counter = 0;
			for(j = i; j < len_s+i; j++){
				if(s[j] ==  goal[j-i])
					counter++;
			}
			if(counter == len_s)
				return 1;
		}
		return 0;
	}
	else
		return 0;
}

int main(int argc, char *argv[]) {
	FILE *file = fopen("1.txt","r");
	int result;
	char s[100],goal[100];
	
	while(1){
		fscanf(file,"%s",s);
		fscanf(file,"%s",goal);
		if(feof(file)) break;
		result = rotateString(s,goal);
		printf("%s\n", result ? "true" : "false");
	} 
	return 0;
}

