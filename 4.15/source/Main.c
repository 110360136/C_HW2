#include <stdio.h>
#include <math.h>

int main() {
    double principal = 5000.0; // 初始投資金額
    int years = 15;             // 投資年限
    double interestRates[] = { 0.10, 0.105, 0.11, 0.115, 0.12 }; // 利率陣列
    int numRates = sizeof(interestRates) / sizeof(interestRates[0]); // 利率數量

    printf("Investment Amount: $%.2f\n", principal);
    printf("Years: %d\n", years);
    printf("Interest Rates: 10.0%%, 10.5%%, 11.0%%, 11.5%%, 12.0%%\n\n");
    printf("Year\t");

    // 打印每個利率的標題
    for (int r = 0; r < numRates; r++)
    {
        printf("Rate %.1f%%\t", interestRates[r] * 100);
    }
    printf("\n");

    // 計算和打印每年的投資增長
    for (int year = 1; year <= years; year++)
    {
        printf("%d\t", year);
        for (int r = 0; r < numRates; r++)
        {
            double amount = principal * pow(1 + interestRates[r], year); // 計算未來的值
            printf("$%.2f\t", amount);
        }
        printf("\n");
    }

    return 0;
}
