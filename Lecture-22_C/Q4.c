#include <stdio.h>
int pattern(int a)
{
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("-");
        }
        printf("\n");
    }
}
int main()
{ 
    int a;
    printf("Enter value of n: ");
    scanf("%d",&a);
    pattern(a);
    return 0;
}