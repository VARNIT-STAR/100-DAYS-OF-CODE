/*
Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include <stdio.h>

int main()
{
    int n, i, temp;
    int a[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Reverse the array without using extra array
    for(i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    // Print reversed array
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}