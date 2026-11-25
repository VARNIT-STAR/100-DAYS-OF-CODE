/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j, k;
    int length, maxLength = 0;
    int repeat;

    printf("Enter a string: ");
    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i; s[j] != '\0'; j++)
        {
            repeat = 0;

            for (k = i; k < j; k++)
            {
                if (s[k] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }

            if (repeat == 1)
            {
                break;
            }

            length = j - i + 1;

            if (length > maxLength)
            {
                maxLength = length;
            }
        }
    }

    printf("%d", maxLength);

    return 0;
}