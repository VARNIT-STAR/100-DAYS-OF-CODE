#include <stdio.h>

int main() 
{
    int a, b, temp ;

    printf("Enter two numbers: ");
    scanf("%d ", &a );
    scanf("%d", &b );

    temp = a;
    a = b;
    b = temp;

    printf("After swapping\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    return 0;
}