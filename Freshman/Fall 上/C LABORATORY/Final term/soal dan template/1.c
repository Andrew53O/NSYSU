#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rotateString(char s[],char goal[]){
	// 請填空此函式 
	
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

