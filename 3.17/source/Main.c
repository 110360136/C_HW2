#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int accNumber;
    double beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;
    printf("Enter account number (-1 to end): ");
    scanf_s("%d", &accNumber);

    while (accNumber != -1)
    {
        printf("Enter beginning balance: ");
        scanf_s("%lf", &beginningBalance);
        printf("Enter total charges: ");
        scanf_s("%lf", &totalCharges);
        printf("Enter total credits: ");
        scanf_s("%lf", &totalCredits);
        printf("Enter credit limit: ");
        scanf_s("%lf", &creditLimit);

        newBalance = beginningBalance + totalCharges - totalCredits;

        if (newBalance > creditLimit)
        {
            printf("Account:\t%d\n", accNumber);
            printf("Credit limit:\t%lf\n", creditLimit);
            printf("Balance:\t%lf\n", newBalance);
            printf("Credit Limit Exceeded.\n");
        }
        printf("\nEnter account number (-1 to end): ");
        scanf_s("%d", &accNumber);
    }
    return 0;
}