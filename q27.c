/*
Q27: Write a program to print the sum of the first n odd numbers.


Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= 2 * n; i = i + 2) {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}