/*
Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>

int main()
{
    int rows, cols, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols];

    printf("Enter elements of the matrix:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if (rows != cols)
    {
        printf("Matrix is not a square matrix.");
        return 0;
    }

    for (int i = 0; i < rows; i++)
    {
        sum = sum + a[i][i];
    }

    printf("Sum of main diagonal elements: %d", sum);

    return 0;
}