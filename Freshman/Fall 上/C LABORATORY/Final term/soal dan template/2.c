#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * integer2Roman (int input) {
	char *ans = malloc(sizeof(char)*100);
	strcpy(ans,"");
		
	// 請填空此函式
	// IV：4 V：5 IX：9 X：10 XL：40 L：50 XC：90 C：100 CD：400 D：500 CM：900 M：1000
	
	return ans;
}

int main(int argc, char *argv[]) {
	FILE *file = fopen("2.txt","r");
	int input;
	char *output;

	while(1) {
		fscanf(file,"%d",&input);
		if(feof(file)) break;
		output = integer2Roman(input);
		printf("%s\n",output); 
	}
	return 0;
}

