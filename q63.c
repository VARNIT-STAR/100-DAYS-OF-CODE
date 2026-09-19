/*
Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n1, n2, i, j;

    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter the elements of first array: ");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of second array: ");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    for(j = 0; j < n2; j++)
    {
        c[i] = b[j];
        i++;
    }

    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}