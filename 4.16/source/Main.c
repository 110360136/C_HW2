#include <stdio.h>

int main(void) {
    int i, j;
    int number = 10; // 設定行數

    // Pattern A
    printf("(A)\n");
    for (i = 1; i <= number; i++)
    {
        for (j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // Pattern B
    printf("(B)\n");
    for (i = number; i >= 1; i--) 
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // Pattern C
    printf("(C)\n");
    for (i = 0; i < number; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < number - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // Pattern D
    printf("(D)\n");
    for (i = 1; i <= number; i++)
    {
        for (j = 0; j < number-i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
