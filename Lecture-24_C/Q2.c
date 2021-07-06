#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b)
{
    int r=0;
        if(a%b!=0)
        {
            r=a%b;
            a=b;
            b=r;
            return gcd(a,b);
        }
        else
        return b;
}
int gcdarray(int arr[],int size)
{
   int res=arr[0];
   for(int i=0;i<size;i++)
   {
    res=gcd(arr[i],res);
   if(res==1)
   {
       return 1;
   }
}
return res;
}
void main()
{
    int size;
    printf("\nPlease Enter The Size Of The Array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("\nPlease Enter The %d Element : ",i);
        scanf("%d",&arr[i]);
    }
    int ans = gcdarray(arr,size);
    printf("The Gcd Of Whole Array Is : %d",ans);
}