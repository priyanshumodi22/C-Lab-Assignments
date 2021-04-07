#include<stdio.h>
int main()
{
    char ch[100];
    int i;
    printf("Enter the string: ");
    scanf("%[^\n]s",ch);
    printf("Words in the string are: \n");
    for(i=0; ch[i]!='\0'; i++)
    {
        printf("%c", ch[i]);
        if(ch[i]==' ')
        {
          printf("\n");
        }
    }
    return 0;
}   