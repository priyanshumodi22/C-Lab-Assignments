#include<stdio.h>
int main()
{
    int i , m , n;
    printf("Enter the values of m and n: ");
    scanf("%d",&m);
    scanf("%d",&n);
    if(m<n)
    {
     for(i=m;i<=n;i++)
     {
         if(i%7==0 && i%18==0)
         {
             printf("%d ",i);
         }
     }
    }
    if(n<m)
    {
     for(i=n;i<=m;i++)
     {
         if(i%7==0 && i%18==0)
         {
             printf("%d ",i);
         }
     }  
    }

    return 0;
}