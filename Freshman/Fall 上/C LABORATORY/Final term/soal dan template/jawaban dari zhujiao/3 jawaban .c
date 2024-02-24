#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validPalindrome(char s[]) {
	// 請填空此函式
	int j ,k;
	char array[strlen(s)];
	j = k = 0;
	for(int i = 0; s[i] != '\0' ; i++) {
		if(('a' <= s[i] && s[i] <= 'z') || ('0' <= s[i] && s[i] <= '9')) array[j++] = s[i];
		else if('A' <= s[i] && s[i] <= 'Z') array[j++] = s[i] + 32;
	}
	j--;
	while(k<j) {
		if(array[k++] != array[j--])
			return 0;
	}
	return 1;
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

