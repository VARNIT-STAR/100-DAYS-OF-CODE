/*
Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>

int main()
{
    char str[100], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to find: ");
    scanf("%c", &ch);

    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] == ch)
        {
            count++;
        }

        i++;
    }

    printf("Frequency of '%c': %d", ch, count);

    return 0;
}