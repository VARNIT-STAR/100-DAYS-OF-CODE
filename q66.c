/*
Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main()
{
    int n, a[100], num, i, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the sorted array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &num);

    pos = n;

    for(i = 0; i < n; i++)
    {
        if(num < a[i])
        {
            pos = i;
            break;
        }
    }

    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = num;
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}