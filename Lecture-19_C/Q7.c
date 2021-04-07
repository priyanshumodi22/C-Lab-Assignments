#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter size of the array:: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element in position %d :: ",i);
        scanf("%d",&arr[i]);
    }
    int max_diff=arr[1]-arr[0];
    for (i=0;i<n;i++)
    {
     for (j=i+1;j<n;j++)
     {        
        if (arr[j]-arr[i]>max_diff)   
        max_diff=arr[j]-arr[i];
        if (arr[i]-arr[j]>max_diff)   
        max_diff=arr[i]-arr[j];
     }    
    }    
    printf("The maximum difference between 2 elements is:: ");
    printf("%d",max_diff);      
    return 0;
}