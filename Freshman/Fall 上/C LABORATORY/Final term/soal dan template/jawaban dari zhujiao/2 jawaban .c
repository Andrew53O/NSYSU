#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * integer2Roman (int input) {
	// �ж�Ŧ��禡
	// IV�G4 V�G5 IX�G9 X�G10 XL�G40 L�G50 XC�G90 C�G100 CD�G400 D�G500 CM�G900 M�G1000
	int arr[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
	int output = 0;
	char *ans = calloc(100, sizeof(char));
	strcpy(ans,"");
	char outputElements[13][2] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	int i;
	for(i = 0;i<13;i++){
		output = input / arr[i];
		input = input % arr[i];
		while(output--) strcat(ans,outputElements[i]);
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

