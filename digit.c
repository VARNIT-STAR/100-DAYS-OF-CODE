#include <stdio.h>
int main()
{
    char n[100];
    int i,digit,sum=0,count=0;

    printf("Enter number:");
    scanf("%s",n);

    for(i=0;n[i]!='\0';i++)
    {
        scanf("%1d",&n[i],&digit);
        if(digit %2==0)
        {
            printf("Even digit=%d,position=%d\n",digit,i+1);
            sum = sum+digit;
            count++;
        }
    }
    printf("sum=%d\n",sum);
    printf("count=%d",count);
     return 0;
}