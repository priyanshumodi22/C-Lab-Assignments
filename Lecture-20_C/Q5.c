#include <stdio.h>
int main()
{
   int n1,n2,temp;
   int *a=&n1;
   int *b=&n2;
   printf("Enter the value of n1 and n2 ::\n");
   scanf("%d%d", &n1,&n2);
   printf("Before Swapping\nn1 = %d\nn2 = %d\n", n1, n2);
   temp=*b;
   *b=*a;
   *a=temp;
   printf("After Swapping\nn1 = %d\nn2 = %d\n", n1, n2);
   return 0;
}