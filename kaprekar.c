#include<stdio.h>
#include<stdlib.h>
int main()
{
     int number, choice;
     int d1, d2, d3, d4;
     int asc, dec, steps, temp;
     printf("Enter a 4 digit number\n");
     scanf("%d", &number);
     if (number<1000 || number>9999)
     {
     printf("Error:Enter a new 4 digit number\n");
     }
     while(number !=6174)
    d1 = number/1000;
    d2 = (number/100) %10;
    d3 = (number/10) %10;
    d4 = number%10;
    if (d1==d2 && d2==d3 && d3==d4)
    {
        printf("Error\n");
    }
    if (d1>d2){d1=temp; d1=d2; d2=temp;}
    if (d2>d3){d2=temp; d2=d3; d3=temp;}
    if (d3>d4){d3=temp; d3=d4; d4=temp;}
    if (d1>d3){d1=temp; d1=d3; d3=temp;}
    if (d1>d4){d1=temp; d1=d4; d4=temp;}
    if (d2>d4){d2=temp; d2=d4; d4=temp;}
    asc= d1*1000 +d2*100 +d3*10+d4;
    dec= d4*1000+d3*100+d2*10+d1;
    number= abs(asc-dec);
    steps ++;
    printf("%d, &steps");


  return 0;






     




}