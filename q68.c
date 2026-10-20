/*
Q68: Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>

int main()
{
    int n, a[100], pos, i;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the index to delete: ");
    scanf("%d", &pos);

    if(pos < 0 || pos >= n)
    {
        printf("Invalid index");
    }
    else
    {
        for(i = pos; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }

        n--;

        printf("Array after deletion: ");
        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}