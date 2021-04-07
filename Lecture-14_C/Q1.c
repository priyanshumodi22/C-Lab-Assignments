#include <stdio.h>
int main()
{
    int i;
    int a[5];
    printf("Enter 5 no. in array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements in the array are: ");
    for(i=0;i<5;i++)
    {
    printf("%d ",a[i]);
    }
    return 0;
}
