#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Elements in the array are: ");
    for(i=0;i<n;i++)
    {
      a[i]=i+1;
      printf("%d ",a[i]);
    }

    return 0;
}
