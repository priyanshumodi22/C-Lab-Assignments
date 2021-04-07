#include <stdio.h>
int main()
{
    int a[8]={1, 9, 6, 2, 4, 5, 3, 7}, b[8];
    printf("\nThe 1D array is: ");
    for(int i=0; i<8; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\n");
    int sum=0;
    for(int i=0; i<8; i++)
    {
        sum+=a[i];
        b[i] = sum;
    }
    
    printf("The cumulative array is: ");
    for(int i=0; i<8; i++)
    {
        printf("%d, ", b[i]);
    }
    printf("\n");

    return 0;
}
