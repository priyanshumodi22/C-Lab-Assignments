#include <stdio.h>
int main()
{
    int a[8]={2, 9, 6, 4, 8, 7, 1, 5}, m[8];
    printf("\nThe 1D array is: ");
    for(int i=0; i<8; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\n");

    for(int i=0; i<7; i+=2)
    {
        m[i] = a[8-2-i];
        m[i+1] = a[8-1-i];
    }
    
    printf("The new modified array is: ");
    for(int i=0; i<8; i++)
    {
        printf("%d, ", m[i]);
    }
    printf("\n");

    return 0;
}
