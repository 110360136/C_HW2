#include <stdio.h>

int main(void)
{
	int hypo, side1, side2, number;
	number = 500;
	int count = 0; // initialization to count
	for (side1 = 1; side1 <= number; side1++) 
	{ 
		for (side2 = 1; side2 <= number; side2++) 
		{
			for (hypo = 1; hypo <= number; hypo++) 
			{ 
				if (hypo * hypo == side1 * side1 + side2 * side2)
					if (side1 < side2) 
					{ 
						printf("Here I found a right triangle! %6d - %-4d - %-4d triangle \n", side1, side2, hypo);
						count++;
					} 
			} 
		}
	} 
	printf("There are %d number right triangle. ", count);

	return 0;
} 