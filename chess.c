#include <stdio.h>
#include <stdlib.h>
int main()
{ 
    char color , piece;
    int x1 , y1 , x2 , y2;
    int iscapture;
    int valid =0;
    printf(" Enter colour (W/B)");
    scanf(" %c", &color);
    printf(" Enter piece (K/Q/R/B/N/P)");
    scanf(" %c", &piece);
    printf(" Enter starting position(x1 , y1)");
    scanf(" %d %d", &x1 , &y1);
    printf(" Enter ending position(x2 , y2)");
    scanf(" %d %d", &x2 , &y2);
    printf(" Enter is capture (0,1)");
    scanf(" %d %d", &iscapture);
    if (x1 == x2 && y1 == y2){
     printf("Invalid move\n");}
     else if (x1 <1 || x1 >8 || x2 <1 || x2 > 8 || y1 <1 || y1 >8 || y2 <1 || y2 >8){
     printf("Invalid move\n");}
    else{
     printf("Valid move");}
     int dx = abs(x2 - x1);
     int dy = abs(y2 - y1);
     
     switch (piece)
     {
        case 'K':
        if (dx<=1 && dy <=1)
           valid =1;
           break;
           case 'Q':
           if (x1 == x2 || y1 == y2 || dx == dy)
           valid =1;
           break;
           case 'R':
           if (x1==x2 || y1 ==y2)
           valid=1;
           break;
           case 'B':
           if (dx == dy)





     
      


             
             
        

     }
    
    






