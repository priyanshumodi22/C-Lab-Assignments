#include <stdio.h>
int main()
{
    char ch[100];
    int i;
    printf("Enter String :: ");
    scanf("%[^\n]s",ch);
    int diff='A'-'a';
    for(i=0;ch[i]!='\0';i++)
    {
        if((i==0 || ch[i-1]==' ') && (ch[i]>='a' && ch[i]<='z'))
        ch[i]+=diff;
        else if((i!=0) && (ch[i-1]!=' ') && (ch[i]!=' ') && (ch[i]>='A' && ch[i]<='Z'))
        ch[i]-=diff;
    }
    printf("The String after alteration :: ");
    printf("%s",ch);
    return 0;
}