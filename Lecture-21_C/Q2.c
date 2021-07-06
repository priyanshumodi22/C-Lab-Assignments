#include <stdio.h>
int main()
{
    char a[20];
    printf("Enter the 1st string: ");
    scanf("%s",a);
    printf("Enter the 2nd string: ");
    scanf("%s",a+5);
    printf("Enter the 3rd string: ");
    scanf("%s",a+10);
    printf("Enter the 4th string: ");
    scanf("%s",a+15);
    printf("%s ",a);
    printf("%s ",a+5);
    printf("%s ",a+10);
    printf("%s ",a+15);
    return 0;
}