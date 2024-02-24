#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rotateString(char s[],char goal[]){
	// 請填空此函式
	int length = strlen(s);
	printf("length %d", length);
		 
	int count = 0;
	int i = 0, j = 0;
	int right = 0;
	int start = 0;
	int not_found =0;
	while(count != length)
	{
//		if (not_found > 100)
//		{
//			printf("not found so it's false\n");
//			return 0;
//		}
		// buat case yang ga ada 
		j = j % length;
		if(s[i] != goal[j])
		{
			j++;
			if (j == (length))
			{
				//printf("ga ketemu jadinya\n");
				return 0;
			}
			
		}
		else // start[i] == goal[j]
		{
			start = 1;
			right++;
			j++;
		}
		
		if (start == 1)
		{
			count++;
			i++	;
		}
		
//		not_found++;
	}
	
	
	if(right == length)
	{
		//printf("\n|masuk loop yang right ini|\n");
		return 1;
	}
	else
	{
		//printf("\n|salah dari functin ini|\n");
		return 0;
	}
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

