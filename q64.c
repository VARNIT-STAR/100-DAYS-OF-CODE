/*
Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main()
{
    long long n;
    int count[10] = {0};
    int digit, max = 0, ans = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    if (n < 0)
        n = -n;

    if (n == 0)
    {
        printf("0");
        return 0;
    }

    while (n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            ans = i;
        }
    }

    printf("%d", ans);

    return 0;
}