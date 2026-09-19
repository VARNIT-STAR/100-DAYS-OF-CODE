/*
Q57: Find the sum of array elements.

Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    int a[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("%d", sum);

    return 0;
}