#include <stdio.h>
int pattern(int n1,int n2,char c)
{
   int i,j;
   for(i=0;i<n1;i++)
   {
       for(j=0;j<n2;j++)
       printf("%c ",c);
       printf("\n");
   }
   return 0;
}
int main()
{
    printf("A B \n");
    pattern(2,3,'*');
    printf("C D \n");
    pattern(2,4,'-');
    printf("D E \n");
    pattern(3,5,'+');
    return 0;
}