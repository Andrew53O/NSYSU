#include <stdio.h>

int main(void)
{
	
	int i, sn, j, k;
	int n5[11]= {2,5,8,12,13,18,21,29,37,49,97};
	
	
 	printf("Binary search:\n");
 	printf("Series of Number:");
 	for( i = 0 ; i <12; i++)
	{
  		printf(" %d",n5[i]);
 	}
  		sn=12;
 		printf("\nSearch Number: %d\n",sn);
 
 		printf("Remaining data: ");
 		
 	for(i=0;i<11;i++)
	{
  			printf(" %d ",n5[i]);
 	}
 		printf("Middle Number: %d , position: %d ",n5[i/2],(i/2)+1);
 	if(sn==n5[i/2])
	{
  		printf("Searched number is on %d position\n",(i/2)+1);
 	}		
 	else if(sn<n5[i/2])
	
	{
  	printf("\nRemaining data: ");
  	
  	for(j = 0; j < i / 2; j++)
	  {
   		printf(" %d ",n5[j]);
  	}
  		printf("Middle Number: %d , position: %d ",n5[j/2],(j/2)+1);
  	if(sn==n5[j/2])
	{
   		printf("Searched number is on %d position\n",(j/2)+1);
  	}
  	else if(sn<n5[j/2])
  	{
   	printf("\nRemaining data: ");
   	for(k = 0 ;k < j/2 ; k++)
	{
    	printf(" %d ",n5[k]);
   	}
   		printf("Middle Number: %d , position: %d ",n5[k/2],(k/2)+1);
  	}
  	else if(sn>n5[j/2])
	{
   	printf("\nRemaining data: ");
   	
   	for(k=(j/2)+1;k<i/2;k++)
	   {
    		printf(" %d ",n5[k]);
   		}	
   			printf("Middle Number: %d , position: %d ",n5[(k/2)+1],(k/2)+2);
   			printf("\nThe searched number is on %d position\n",(k/2)+2);
  }
 }
}
