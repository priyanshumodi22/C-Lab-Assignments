#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
    int num;
    int d[10];
    int count;
}stu;

void counter(stu *s)
{
    int i=0;
    while(s->num > 0)
    {
        s->d[i]=(s->num)%10;
        s->count++;s->num/=10;
        i++;
    }
}
int main()
{
    stu a;
    printf("\nEnter any integer: ");
    scanf("%d",&a.num);
    a.count=0;
    counter(&a);
    printf("\nThe no. of digits in the integer is: %d",a.count);
    printf("\nThe digits are: ");
    for(int i=0;i<a.count;i++)
    {
       printf("%d ",a.d[i]); 
    }
    printf("\n");
    return 0;
}