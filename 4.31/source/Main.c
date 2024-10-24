#include<stdio.h>

int main(void)
{
	int space, i, j;
	int number = 5;

	/*  Top diamond */
	for (i = 1; i <= number; i++) 
	{ 
		for (space = number - i; space >= 1; space--)  // outer for begins
			printf(" ");
		for (j = 1; j <= (2 * i - 1); j++)
			printf("*");

		printf("\n");
	} 
	// bottom diamond 
	for (i = 1; i <= number; i++) 
	{
		for (space = 1; space <= i; space++)
			printf(" ");
		for (j = 1; j <= (2 * number - 1) - 2 * i; j++)
			printf("*");

		printf("\n");
	}
	return 0;
} 
