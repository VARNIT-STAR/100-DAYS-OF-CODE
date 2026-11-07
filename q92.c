/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        for (j = i + 1; j < strlen(str); j++) {
            if (str[i] == str[j] && str[i] >= 'a' && str[i] <= 'z') {
                printf("%c", str[i]);
                found = 1;
                break;
            }
        }

        if (found == 1) {
            break;
        }
    }

    if (found == 0) {
        printf("No repeating alphabet");
    }

    return 0;
}
