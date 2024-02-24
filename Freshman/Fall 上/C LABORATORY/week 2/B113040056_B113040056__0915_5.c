#include <stdio.h>


int main (void)
{
	int price, items_count, total_price, cash, changes;
	int five_hundred, one_hundred, fifty, ten, five, one;
	
	
	printf("Money Sytem\n\n");
	printf("Welcome to this money system\n\n");
	
	
	printf("1. Price : ");
	scanf("%d", &price);
	
	printf("\n");
	
	printf("2. Count : ");
	scanf("%d", &items_count);
	
	printf("\n");
	
	total_price = price * items_count;
	printf("3. Total Price : %d yuan\n", total_price);
	
	printf("\n");
	
	printf("4. Cash : ");
	scanf("%d", &cash);
	
	printf("======================\n");
	
	changes = cash - total_price;
	printf("5. Changes : %d yuan\n\n", changes);
	
	
	printf("*** The banknotes should be as follows\n\n");
	
	five_hundred = changes / 500;
	printf("500 yuan : %d \n\n", five_hundred);
	
	changes = changes - (500 * five_hundred);
	
	one_hundred = changes / 100;
	printf("100 yuan : %d \n\n", one_hundred);
	
	changes = changes - (100 * one_hundred);
	
	fifty = changes / 50;
	printf("50 yuan : %d \n\n", fifty);
	
	changes = changes - (50 * fifty);
	
	ten = changes / 10;
	printf("10 yuan : %d \n\n", ten);
	
	changes = changes - (10 * ten);
	
	five = changes / 5;
	printf("5 yuan : %d \n\n", five);
	
	changes = changes - (5 * five);
	
	one = changes / 1;
	printf("1 yuan : %d \n\n", one);
	
	changes = changes - (1 * one);
	
	return 0;
}
