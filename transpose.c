#include <stdio.h>
int transposeandcheck(int a[3][3]) 
{
    int i,j,check=1;
    printf("transpose of the matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[j][i]);
        }
        printf("\n");
    
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]!=a[j][i])
            {check=0;
            break;
        }
        }
        if(check==0)
        break; 
    }
    return check;
}

int main()
{
    int a[3][3];
    int i,j,result;

    printf("Enter the elements of a 3x3 matrix\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    result = transposeandcheck(a);

    if (result==1)
    printf("\nThe matrrix is symmetric");
    else
    printf("\nThe matrix is not symmetric.");

    return 0;
}




