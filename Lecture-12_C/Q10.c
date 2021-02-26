#include<stdio.h>
int main()
{
    int i, j, num;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    printf("\n");
    for(i = 0; i < num; i++)
    {   
        for(j = 0; j < num; j++)
        {
            if(j == 0 || i == num-1 || j == i)
            printf("*");
            else    
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}