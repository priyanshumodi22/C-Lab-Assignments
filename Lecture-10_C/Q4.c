#include <stdio.h>
 int main()
{
  int i = 2, num, count = 0; 
   
  printf("\n Enter any no. to check whether its a prime no. :\n");
  scanf("%d", &num);
 
  while(i <= num/2)
   {
     if(num%i == 0)
     {
        count++;
	break;
      }
      i++;	
   }
   if(count == 0 && num != 1 )
   {
   	printf("\n %d is a Prime number", num);
   }
   else
   {
 	printf("\n %d is Not a Prime number", num);
   }
  return 0;
}