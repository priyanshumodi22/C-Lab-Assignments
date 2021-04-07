#include<stdio.h>
int main()
{
    char str[1000],rev[1000];
    int i , j , c=0;
    printf("Enter the string::");
    scanf("%[^\n]s",str);
    printf("Given string: %s",str);
    while(str[c]!='\0')
    {
        c++;
    }
    j=c-1;
    rev[c]='\0';
    for(i=0;i<c;i++)
    {
        rev[i]=str[j];
        j--;
    }
    printf("\nReversed string: %s",rev);
    return 0;
}