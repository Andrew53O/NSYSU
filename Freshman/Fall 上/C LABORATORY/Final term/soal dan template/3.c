#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validPalindrome(char s[]) {
	// 請填空此函式
	
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

