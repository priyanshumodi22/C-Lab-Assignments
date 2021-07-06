#include<stdio.h>
#include<stdlib.h>

int evensum(int a[],int length)
{
    int sum=0;
    for(int i=0;i<length;i++)
    {
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
    }
    return sum;
}
void main()
{
    int size;
    printf("\nPlease Enter The Size Of Array: ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    {
        printf("\nPlease Enter %d Element: ",i);
        scanf("%d",&a[i]);
    }
    printf("The Sum Of Even Number In Array Is : %d ",evensum(a,size));


}