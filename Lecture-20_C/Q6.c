#include <stdio.h>
int main()
{
   int n;
   printf("Enter size of the array:: ");
   scanf("%d",&n);
   int array[n];
   int i,sum=0;
   int *ptr;
   printf("\nEnter array elements::");
   for(i=0;i<n;i++)
   scanf("%d",&array[i]);
   ptr = &array[0];
   for(i=0;i<n;i++) 
   {
      if(array[i]%2==0)
      sum = sum + *ptr;
      ptr++;
   }
   printf("\nThe sum is: %d",sum);
   return 0;
}