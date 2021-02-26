#include <stdio.h>
int main()
{
  int i , n1 , n2;
   for (i=1;i<=10;i++) //Natural no. from 1 to 10.
   {
        printf("%d  ",i);
   }
  printf("\nEnter the value of n: ");  //Natural no. from 1 to n.
  scanf("%d", &n1);
  for (i=1;i<=n1;i++)
  {
     printf("%d  ",i); 
  } 
  printf("\n\n");
  for(i=10;i>=1;i--)
  {
      printf("%d  ",i);
  }

  printf("\nEnter the value of n: ");
  scanf("%d",&n2);
  for(i=n2;i>=1;i--)
  {
      printf("%d  ",i);
  }

  return 0;
}