#include<stdio.h>

int main() 
{

    float hoursNo;
    float hourlyRate;
    float salary;

    while (1) 
    {

        printf("\nEnter # of hours worked <-1 to end>: ");
        scanf_s("%f", &hoursNo);

        if (hoursNo == -1)
            break;

        printf("\nEnter hourly rate of the worker ($00.00):");
        scanf_s("%f", &hourlyRate);

        if (hoursNo < 40) 
        {
            salary = (hourlyRate * hoursNo);
            printf("\nSalary is $ %f", salary);
        }
        else 
        {
            salary = (hourlyRate * 40) + (15 * (hoursNo - 40));
            printf("\nSalary is $ %f", salary);
        }
    }
    return 0;
}