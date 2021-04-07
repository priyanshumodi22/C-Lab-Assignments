#include<stdio.h>
int main()
{
    char str[1000],reverse[1000];
    int i, j, count=0 , c=0;
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    printf("\nGiven stirng is: %s",str);
    while(str[count]!='\0')
    {
        count++;
    }
    j=count-1;
    for(i=0;i<count;i++)
    {
        reverse[i]=str[j];
        j--;
    }
    reverse[count]='\0';
    printf("\nString after reverse: %s",reverse);
    for(i=0;i<count;i++)
    {
        if(str[i]==reverse[i])
        {
            c++;
        }
    }
        printf("\n");
    if(c==count)
    {
        printf("Palindrome");
    }
    else
    {
        printf("not Palindrome");
    }
    return 0;
    fflush(stdin);
}