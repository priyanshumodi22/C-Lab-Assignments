#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a[6][6]=
    {
        {1,0,0,1,1,1},
        {1,1,1,1,0,1},
        {0,0,0,0,0,1},
        {0,0,0,1,0,1},
        {1,1,1,0,0,1},
        {0,1,1,0,1,1}
    };
    //displaying the matrix
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int ir,cr;
    printf("\nPlease Enter The Row number (0-5) : ");
    scanf("%d",&ir);
     printf("\nPlease Enter The Col number (0-5) : ");
    scanf("%d",&cr);
    printf("%d-%d ",ir,cr);
    P:
    if(a[ir-1][cr]==1 && ir>0)
    {
        a[ir][cr]=-1;
        ir=ir-1;
        printf("%d-%d ",ir,cr);
    goto P;
    }
    else if(a[ir+1][cr]==1)
    {
        a[ir][cr]=-1;
        ir=ir+1;
        printf("%d-%d ",ir,cr);
    goto P;
    }
    else if(a[ir][cr-1]==1 && cr>0)
    {
        a[ir][cr]=-1;
        cr=cr-1;
        printf("%d-%d ",ir,cr);
    goto P;
    }
    else if(a[ir][cr+1]==1)
    {
        a[ir][cr]=-1;
        cr=cr+1;
        printf("%d-%d ",ir,cr);
    goto P;
    }
    else if(ir==6 || ir==-1 || cr==6 || cr==-1 )
    {
        return 0;
        printf("\nThe End");
    } 
    return 0;
}