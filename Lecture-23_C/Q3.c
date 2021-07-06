#include<stdio.h>
#include<stdlib.h>

void cal(int a,int b,int c,int *max,int *min,float *avg)
{
*avg=(a+b+c)/3.0;
if(a>b && b>c)
{
    *max=a;
    *min=c;
}
else if(b>a && a>c)
{
    *max=b;
    *min=c;
}
else if(c>a && a>b)
{
    *max=c;
    *min=b;
}
}
void main()
{
    int a,b,c,min,max;
    float avg;
    printf("\nPlease Enter 1st Number: ");
    scanf("%d",&a);
    printf("\nPlease Enter 2nd Number: ");
    scanf("%d",&b);
    printf("\nPlease Enter 3rd Number: ");
    scanf("%d",&c);
    cal(a,b,c,&max,&min,&avg);
    printf("\nThe Avg Is : %f",avg);
    printf("\nThe Max Is : %d",max);
    printf("\nThe Min Is : %d",min);

    
}