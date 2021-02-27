#include<stdio.h>
int main()
{
    int n;
    float i , sum=0;
    printf("Enter an integer (no. of terms): ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(((4*i)-3)/((4*i)-1));
    }
     printf("\n1/3 + 5/7 + 9/11 +........+(n-2)/n\n");
     printf("Sum = %f",sum);
     
     return 0;
}