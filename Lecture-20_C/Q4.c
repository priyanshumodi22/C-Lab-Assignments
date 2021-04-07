#include <stdio.h>
int main()
{
    int n,i,temp,count;
    int arr[] = { 2, 4, 6, 5, 8, 1 };
    
    int *left=&arr[0];
    int *right=&arr[5];
    printf("\nArray before reverse: ");
    for(i=0;i<6;i++)
    printf("%d ", arr[i]);
    while(left<=right) 
    {
        temp=*right;
        *right=*left;
        *left=temp;
        left++;
        right--;
    }
    printf("\nArray after reverse:  ");
    for(i=0;i<6;i++)
    printf("%d ", arr[i]);
    return 0;
}