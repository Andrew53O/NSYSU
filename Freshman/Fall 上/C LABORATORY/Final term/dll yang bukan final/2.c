#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * integer2Roman (int input) {
	char *ans = malloc(sizeof(char)*100);
	strcpy(ans,"");
		
	// �ж�Ŧ��禡
	// IV�G4 V�G5 IX�G9 X�G10 XL�G40 L�G50 XC�G90 C�G100 CD�G400 D�G500 CM�G900 M�G1000
	
	
	
	
	
	
	
	
	
	
	

	
    int i = 0;

    while(input != 0)
    {
        if (input >= 1000)
        {
            input -= 1000;
            ans[i++] = 'M';
        }
        else if (input >= 900)
        {
            input-= 900;
            ans[i++] = 'C';
            ans[i++] = 'M';
        }
        else if (input >= 500)
        {
            input-= 500;
            ans[i++] = 'D';
        }
        else if (input >= 400)
        {
            input-= 400;
            ans[i++] = 'C';
            ans[i++] = 'D';
        }
        else if (input >= 100)
        {
            input-= 100;
            ans[i++] = 'C';
        }
        else if (input >= 90)
        {
            input-= 90;
            ans[i++] = 'X';
            ans[i++] = 'C';
        }
        else if (input >= 50)
        {
            input-= 50;
            ans[i++] = 'L';
        }
        else if (input >= 40)
        {
            input-= 40;
            ans[i++] = 'X';
            ans[i++] = 'L';
        }
        else if (input >= 10)
        {
            input-= 10;
            ans[i++] = 'X';
        }
        else if (input >= 9)
        {
            input-= 9;
            ans[i++] = 'I';
            ans[i++] = 'X';
        }
        else if (input >= 5)
        {
            input-= 5;
            ans[i++] = 'V';
        }
        else if (input >= 4)
        {
            input-= 4;
            ans[i++] = 'I';
            ans[i++] = 'V';
        }
        else if (input >= 1)
        {
            input-= 1;
            ans[i++] = 'I';
        }


    }
    ans[i] = '\0';
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

