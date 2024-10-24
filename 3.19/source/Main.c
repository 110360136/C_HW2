#include<stdio.h>

int main() {
    float loanPrincipal;
    float interestRate;
    int days;
    float interestCharge;

    while (1)
    {
        printf("\Enter loan principal <-1 to end>:");
        scanf_s("%f", &loanPrincipal);

        if (loanPrincipal == -1)
            break;

        printf("\nEnter interest rate:");
        scanf_s("%f", &interestRate);

        printf("\nEnter term of loan in days:");
        scanf_s("%i", &days);

        interestCharge = ((loanPrincipal * interestRate * days) / 365);

        printf("\nThe interest charge is $ %.2f\n", interestCharge);
    }

    return 0;
}