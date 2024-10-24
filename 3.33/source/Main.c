#include <stdio.h>

int main() {
    int length, breadth;
    int i, j;

    printf("Enter the length of the rectangle: ");
    scanf_s("%i", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf_s("%i", &breadth);

    for (i = 0; i < length; i++) {
        for (j = 0; j < breadth; j++) {
            if (i == 0 || i == length - 1 || j == 0 || j == breadth - 1)
                printf("+");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

