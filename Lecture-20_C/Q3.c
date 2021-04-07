#include <stdio.h>
int main()
{
    int n, i, c=0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    int rev[n];
    int *ptr=arr;
    int *ptr1=rev;
    printf("Enter elements in array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++;   
    }
    ptr = arr;
    for(i = n-1; i >=0; i--)
    {
        rev[c]=arr[i];
        ++c;
    }
    ptr1 = rev;
    printf("Array Elements:: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");
    printf("Reverse Array Elements:: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr1);
        ptr1++;
    }
    return 0;
}