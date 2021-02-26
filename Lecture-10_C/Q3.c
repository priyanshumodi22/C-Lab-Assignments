#include<stdio.h>
int main()
{
    int i=1 , c;
    printf("Find the no.\n");
    while(i<=50)
    {   
      c=i*i; 
      if(c>=1000 && c<=2500)
     {
         printf("%d  ",i);
     }
     i++;
    }

    return 0;
}