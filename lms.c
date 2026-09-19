#include <stdio.h>

int main()
{
    int num;
    int d1, d2, d3, d4;
    int temp;
    int ascending, descending;
    int steps = 0;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999)
    {printf("Error Enter a 4-digit number.\n");}

    while (num != 6174)
    {
        d1 = num / 1000;
        d2 = (num / 100) % 10;
        d3 = (num / 10) % 10;
        d4 = num % 10;
        if (d1 > d2)
        {temp = d1;d1 = d2;d2 = temp;}

        if (d2 > d3)
        {temp = d2;d2 = d3;d3 = temp;}

        if (d3 > d4)
        {temp = d3;d3 = d4;d4 = temp;}

        if (d1 > d2)
        {temp = d1;d1 = d2;d2 = temp;}

        if (d2 > d3)
        {temp = d2;d2 = d3;d3 = temp;}

        if (d1 > d2)
        {temp = d1;d1 = d2;d2 = temp;}
        ascending = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
        descending = d4 * 1000 + d3 * 100 + d2 * 10 + d1;
        num = descending - ascending;
        steps++;

        printf("Step %d: %04d - %04d = %04d\n",
               steps, descending, ascending, num);
    }

    printf("Kaprekar number 6174 reached\n");
    printf("Number of steps taken = %d\n", steps);

    return 0;
}