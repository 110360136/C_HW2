#include <stdio.h>
#include <math.h>

int main() {
    double principal = 5000.0; // ��l�����B
    int years = 15;             // ���~��
    double interestRates[] = { 0.10, 0.105, 0.11, 0.115, 0.12 }; // �Q�v�}�C
    int numRates = sizeof(interestRates) / sizeof(interestRates[0]); // �Q�v�ƶq

    printf("Investment Amount: $%.2f\n", principal);
    printf("Years: %d\n", years);
    printf("Interest Rates: 10.0%%, 10.5%%, 11.0%%, 11.5%%, 12.0%%\n\n");
    printf("Year\t");

    // ���L�C�ӧQ�v�����D
    for (int r = 0; r < numRates; r++)
    {
        printf("Rate %.1f%%\t", interestRates[r] * 100);
    }
    printf("\n");

    // �p��M���L�C�~�����W��
    for (int year = 1; year <= years; year++)
    {
        printf("%d\t", year);
        for (int r = 0; r < numRates; r++)
        {
            double amount = principal * pow(1 + interestRates[r], year); // �p�⥼�Ӫ���
            printf("$%.2f\t", amount);
        }
        printf("\n");
    }

    return 0;
}
