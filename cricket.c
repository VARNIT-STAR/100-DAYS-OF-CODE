#include <stdio.h>
 int main()
 {
    int runs[11];
    int i;
    int total=0;
    printf("Enter runs scored by 11 players\n");

    for(i=0;i<=10;i++)
    { scanf("%d", &runs[i]);}

        for(i=0;i<=10;i++){
        if(runs[i]==0)

        {printf("Player%d:out for a duck\n",i+1);}
        else if (runs[i]>0 && runs[i]<30)

        {printf("PLayer %d:scored %d runs - a decent contribution\n",i+1,runs[i]);}
        else if (runs[i]>=30 && runs[i]<50)

        {printf("Player %d :solid knock of %d runs!\n",i+1,runs[i]);}
        else if (runs[i]>=50 && runs[i]<100)

        {printf("PLayer%d: half century!%d runs\n",i+1,runs[i]);}
        else{

            printf("Player%d:century!! what an innings - %d runs\n",i+1,runs[i]);
        }

        total = total +runs[i];}
        
        printf("=== Match Summary ===\n");
        printf("total team score: %d\n", total);

        return 0;



    



 }