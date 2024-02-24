#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validPalindrome(char s[]) {
	char s_ln[100]={};
	int len = strlen(s), i;
	for(i = 0; i < len; i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] = s[i]-65+97;
		}
	}
	int counter = 0, head = 0, tail = len-2;
	while(head != len-1){
		while((s[head] < '0' || s[head] > '9') && (s[head] < 'a' || s[head] > 'z')){
			head++;
		}
		while((s[tail] < '0' || s[tail] > '9') && (s[tail] < 'a' || s[tail] > 'z')){
			tail--;
		}
		if(s[head] != s[tail]){
			return 0;
		}
		head++;tail--;
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

