#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int digits(int number){
	int counter = 1;
	while(number/10 != 0){
		number/=10;
		counter++;
	}
	return counter;
}

char * integer2Roman (int input) {
	char *ans = malloc(sizeof(char)*100);
	strcpy(ans,"");
	
	int digit = digits(input), temp = 0, i;
	if(digit == 4){
		int divs = (pow(10,digit-1));
		temp = (input/divs) % 10;
		
		for(i = 0; i < temp; i++){
			strcat(ans,"M");
		}
		
		digit--;
	}
	if(digit == 3){
		int divs = (pow(10,digit-1));
		temp = (input/divs) % 10;
		if(temp == 9){
			strcat(ans,"CM");
			temp-=9;
		}
		else if(temp >= 5){
			strcat(ans,"D");
			temp-=5;
		}
		else if(temp == 4){
			strcat(ans, "CD");
			temp-=4;
		}
		
		for(i = 0; i < temp; i++){
			strcat(ans,"C");
		}
		
		digit--;
	}
	if(digit == 2){
		int divs = (pow(10,digit-1));
		temp = (input/divs) % 10;
		
		if(temp == 9){
			strcat(ans,"XC");
			temp-=9;
		}
		else if(temp >= 5){
			strcat(ans,"L");
			temp-=5;
		}
		else if(temp == 4){
			strcat(ans, "XL");
			temp-=4;
		}
		
		for(i = 0; i < temp; i++){
			strcat(ans,"X");
		}
		
		digit--;
	}
	if(digit == 1){
		int divs = (pow(10,digit-1));
		temp = (input/divs) % 10;
		
		if(temp == 9){
			strcat(ans,"IX");
			temp-=9;
		}
		else if(temp >= 5){
			strcat(ans,"V");
			temp-=5;
		}
		else if(temp == 4){
			strcat(ans, "IV");
			temp-=4;
		}
		
		for(i = 0; i < temp; i++){
			strcat(ans,"I");
		}
		
	}
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

