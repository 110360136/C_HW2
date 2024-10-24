#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float sales;
    float salesCommission;

    while (1) {
        printf("\nEnter the sales in dollars (-1 to end): ");
        if (scanf_s("%f", &sales) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            // 清除輸入緩衝區
            while (getchar() != '\n');
            continue;
        }

        if (sales == -1) {
            break;
        }

        // 檢查銷售金額是否為負數
        if (sales < 0) {
            printf("Sales cannot be negative. Please enter a valid amount.\n");
            continue;
        }

        salesCommission = 200 + (0.09 * sales);
        printf("\nSalary is: $%.2f\n", salesCommission);
    }

    return 0;
}
