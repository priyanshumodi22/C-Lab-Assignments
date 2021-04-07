#include <stdio.h>
int main()
{
    char ch1[100];
    char ch2[100;
    int i;
    printf("Enter String:");
    scanf("%[^\n]s",&ch1);
    for(i=0;ch1[i]!='\0';i++)
    {
        ch2[i]=ch1[i];
    }
    ch2[i]='\0';
    printf("Copying string...\n");
    printf("%s",ch2);
    return 0;
}