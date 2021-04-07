#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ind;
    printf("Enter element to find out forwar and backward elements: ");
    scanf("%d",&ind);
    int *p;
    p=a+ind;
    for(i=2;i<=ind;i++)
    {
        printf("backword:%d\n",p[-i]);
    }
    for(i=0;i<n-ind;i++)
    {
        printf("forword:%d\n",p[i]);
    }

    return 0;
}