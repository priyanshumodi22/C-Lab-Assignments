#include<stdio.h>
#include<stdlib.h>
void sum(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
    int sum=0;
    sum=sum+a[i]+a[i+1];
    i++;
    printf(" %d  ",sum);
    }
}
void main()
{
    int size;
    printf("\nPlease Enter The Size : ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    {
        printf("\nPlease Enter The %d element : ",i);
        scanf("%d",&a[i]);
    }
    printf("Array is: \n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    sum(a,size);
}

