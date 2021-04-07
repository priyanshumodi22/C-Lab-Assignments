#include <stdio.h>
int main()
{
    char ch1[100];
    char ch2[100];
    int i,j,k;
    printf("Enter String 1 ");
    scanf("%s",ch1);
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
    for (k=i-1;k>=0;--k,++j) 
    {
       ch2[j] = ch1[k];
    }
    ch2[j] = '\0';
    printf("\nAfter concatenation :: ");
    printf("%s",ch2);
  return 0;
}