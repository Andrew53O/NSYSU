#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rotateString(char s[],char goal[]){
	// 請填空此函式 
	if(strlen(s) != strlen(goal)) return 0;
	int count = strlen(s);
	while(count-- > 0){
		if(strcmp(s,goal) == 0) return 1;
		int len = strlen(s); 
		char temp = s[0];
		int i;
		for(i = 1;i<len;i++){
			s[i-1] = s[i];
		}
		s[len-1] = temp;
	}
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

