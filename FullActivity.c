#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Activity1()
{
    int work_days = 0;
    int earnings = 250;
    int sum_of_earnings = 0;
    printf("How many days?: ");
    scanf("%d", &work_days);
    printf("    MARCUS EARNINGS\n");
    printf("=====================\n");
    printf("  DAYS\tEARNINGS\t\n");
    for (int day = 1; day <= work_days; day++)
    {
        sum_of_earnings += earnings;
        printf("  %d\t%dPHP\n", day, earnings);
        earnings += 100;
    }
    printf("=====================\n");
    printf("Total Earnings is: %dPHP", sum_of_earnings);
}

void Activity2()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d\t", (i * j));
        }
        printf("\n");
    }
}

void Activity3()
{
    int x[10], i, hi, low;
    for (i = 0; i < 10; i++)
    {
        printf("Enter a value: ");
        scanf("%d", &x[i]);
    }
    hi = x[0];
    low = x[0];
    for (i = 1; i < 10; i++)
    {
        if (x[i] < low)
        {
            low = x[i];
        }
        if (x[i] > hi)
        {
            hi = x[i];
        }
    }
    printf("\nHigh = %d\n", hi);
    printf("Low = %d\n", low);
}

void Activity4()
{
    int x[5], sum = 0, i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter Value: ");
        scanf("%d", &x[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + x[i];
    }
    printf("\n");
    for (i = 0; i <= 4; i++)
    {
        if (i == 4)
        {
            printf("%d = ", x[i]);
        }
        else
        {
            printf("%d + ", x[i]);
        }
    }
    printf("%d", sum);
}

void Activity5()
{
    int array1[3][3];
    int row, column;
    for (row = 0; row < 3; row++)
    {
        for (column = 0; column < 3; column++)
        {
            printf("[%d][%d]: ", row, column);
            scanf("%d", &array1[row][column]);
        }
    }
    printf("\n");
    for (row = 0; row < 3; row++)
    {
        for (column = 0; column < 3; column++)
        {
            printf(" %d ", array1[row][column]);
        }
        printf("\n");
    }
}

int FinalCaseStudy()
{
    printf("\n\n****************************************\n");
    printf("*****    CASE STUDY COMPILATION    *****\n");
    printf("****************************************\n");
    printf("[1] Marcus Lemonade Problem\n");
    printf("[2] Generate Multiplication Table\n");
    printf("[3] Compute Highest and Lowest Values in Array\n");
    printf("[4] Sum of All Values in the Array\n");
    printf("[5] Create Two Dimensional Arrays\n");
    printf("[6] Exit\n");
    printf("****************************************\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        Activity1();
        break;
    case 2:
        Activity2();
        break;
    case 3:
        Activity3();
        break;
    case 4:
        Activity4();
        break;
    case 5:
        Activity5();
        break;
    case 6:
        printf("Thank you for using this program!");
        return 0;
        break;
    default:
        printf("Invalid Input!");
        break;
    }
}

void main()
{
    int quitValue;
    while (true)
    {
        quitValue = FinalCaseStudy();
        if (quitValue == 0)
            break;
    }
}