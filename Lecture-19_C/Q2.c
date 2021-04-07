#include <stdio.h>
int main()
{
    char ch[100];
    int i;
    printf("Enter String ");
    scanf("%[^\n]s",ch);
    for(i=0;i<100;i++)
    {
        if(ch[i]=='\0')
        break;
    }
    printf("The length of the string :: ");
    printf("%d",i);
    return 0;
}