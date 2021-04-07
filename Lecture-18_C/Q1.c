#include <stdio.h>
int main()
{   int n;
    printf("Enter the size of character array:\n");
    scanf("%d",&n);
    char str[n];
    printf("Give input as a string::");
    scanf("%s", str);
    printf("Your given string is:: %s",str);
    return 0;
}