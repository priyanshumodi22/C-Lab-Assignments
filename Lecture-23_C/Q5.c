#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b)
{
    int rem,ini;
    while(1)
    {
        rem=a%b;
        b=a;
        a=rem;
        if(rem==0)
        {
            return b;
            break;
        }

    }
}

int gcdarray(int a[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
    sum=sum+gcd(a[i],a[i+1]);
    i++;
    }
    return sum;

}
void main()
{
    int size;
    printf("\nPlease Enter The Size");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    {
        printf("\nPlease Enter The %d element",i);
        scanf("%d",&a[i]);    
    }
    printf("\n");
    printf("The Sum Of The All GCD In The Array Is : %d",gcdarray(a,size));
}

