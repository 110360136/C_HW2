#include <stdio.h>

int main(void)
{
	float  sal_manager, sal_hour, sal_comis, sal_piece; // defind salaries
	int  hour, wage; // for hourly workers
	float com_gross; //for case 3
	int piece_produce;  // for case 4
	float  piece_earn; // for case 4
	int number;

	printf("Enter 1 for Managers \n");
	printf("Enter 2 for Hourly Workers \n");
	printf("Enter 3 for Comission Workers \n");
	printf("Enter 4 for Pieceworkers \n");
	printf("\n\nEnter the cod of workers: \n");
	printf("Enter the EOF character to end input.\n");


	while ((number = getchar()) != EOF) {

		switch (number) {

		case '1':
			printf("Enter the fix salary of managers: ");
			scanf_s("%f", &sal_manager);
			printf("The salary of this manager is : $ %.2f\n", sal_manager);
			printf("\nEnter the cod of workers: \n");
			break;

		case '2':
			printf("How many hours worked this week: ");
			scanf_s("%d", &hour);
			printf("What is the first 40 hours waged: ");
			scanf_s("%d", &wage);

			if (hour <= 40) {
				sal_hour = (float)wage * hour;
				printf("The salary of this hourly workers is: $ %.2f ", sal_hour);

			}
			else {
				sal_hour = (float)(wage * (hour - 40) * 1.5 + wage * 40);
				printf("The salary of this hourly workers is: $ %.2f ", sal_hour);
			}
			printf("\nEnter the cod of workers: \n");
			break;

		case '3':
			printf("Enter gross weekly sales: ");
			scanf_s("%f", &com_gross);
			sal_comis = 250 + (com_gross * 5.7 / 100);
			printf("The salary of this commision worker is : $ %.2f", sal_comis);
			printf("\nEnter the cod of workers: \n");
			break;

		case '4':
			printf("How many items this pieceworker produce this week ? ");
			scanf_s("%d", &piece_produce);
			printf("How many money pieceworkers earn for each one items: ");
			scanf_s("%f", &piece_earn);
			sal_piece = piece_produce * piece_earn;
			printf("The salary of this pieceworker is : $ %.2f", sal_piece);
			printf("\nEnter the cod of workers: \n");
			break;

		case ' ':
		case '\t':
		case '\n':
			break;

		default:
			printf("Incorrect number entered !! \n ");
			printf("Please enter another number: \n");
			printf("Enter the EOF character to end input. \n");



		} 

	} 

	return 0;
}  
