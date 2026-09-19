#include <stdio.h>
#include <stdlib.h>

int main()
{
    char piece , color;
    int x1 , y1 , x2 , y2 , isCapture;
    int dx , dy;
    printf("Enter piece (K,Q,R,B,N,P)");
    scanf(" %c", &piece);
    printf("Enter color (W/B)");
    scanf(" %c", &color);
    printf("Enter start position (x1 , y1)");
    scanf("%d %d", &x1, &y1);
    printf("Enter end position (x2 , y2)");
    scanf("%d %d", &x2, &y2);
    printf("Enter isCapture (0/1)");
    scanf("%d", &isCapture);
    if (x1< 1 || x1 > 8 || y1 < 1 || y1> 8 ||
        x2 < 1 || x2> 8 || y2 < 1 || y2 > 8){
     printf("Invalid move\n");}
     else if ( x1==x2 || y1==y2){
     printf("Invalid move\n");}
     else{
     printf("Valid move\n");}
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    switch(piece)
    {     
        case 'K':
            if(dx <= 1 && dy <= 1)
            printf("Valid move");
            else
            printf("Invalid move");
            break;
        case 'Q':
            if(x1 == x2 || y1 == y2 || dx == dy)
            printf("Valid move");
            else
            printf("Invalid move");
            break;
        case 'R':
            if(x1 == x2 || y1 == y2)
            printf("Valid move");
            else
             printf("Invalid move");
            break;
        case 'B':
            if(dx == dy)
             printf("Valid move");
            else
            printf("Invalid move");
            break;
        case 'N':
            if(dx == 2 && dy == 1 || dx == 1 && dy == 2)
             printf("Valid move");
            else
             printf("Invalid move");
            break;
    }
        
            

         return 0;
    }