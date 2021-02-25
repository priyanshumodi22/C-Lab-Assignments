#include<stdio.h>
int main()
{
    int n,mul=1;
    printf("multiplication of n*(n-3)*(n-6)*......*1\n");
    printf("Enter value of n: ");
    scanf("%d",&n);
    while (1<=n)
   {
        printf("%d*",n);
        mul = mul * n;
        n--;
        n--;
        n--;
   }
        printf("\nAns = %d",mul);
    return 0;
}