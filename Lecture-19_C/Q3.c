/*Concatenate string*/
#include <stdio.h>
int main()
{
    char ch1[100];
    char ch2[100];
    int i,j,k;
    printf("Enter String 1 ");
    scanf("%s",ch1);
    fflush(stdin);
    printf("Enter String 2 ");
    scanf("%s",ch2);
    for(i=0;i<100;i++)
    {
        if(ch1[i]=='\0')
        break;
    }
    printf("\n");
    printf("\nThe length of the string 1 :: ");
    printf("%d",i);
    for(j=0;j<100;j++)
    {
        if(ch2[j]=='\0')
        break;
    }
    printf("\nThe length of the string 2 :: ");
    printf("%d",j);
    for (k=0;ch2[k]!='\0';++k,++i) 
    {
       ch1[i] = ch2[k];
    }
    ch1[i] = '\0';
    printf("\nAfter concatenation :: ");
    printf("%s",ch1);
  return 0;
}