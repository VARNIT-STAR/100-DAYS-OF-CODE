/*
Q82: Print each character of a string on a new line.

Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Characters of the string:\n");

    while (str[i] != '\0' && str[i] != '\n')
    {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}