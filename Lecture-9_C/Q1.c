#include<stdio.h>

int main()
{
  	int Number, i = 1 , j = 1;
	  printf("Natural no. from 1 to 10:\n");
  	 while(i<=10)
    {
        printf("%d ",i);
        i++;
    }
  
  	printf("\nPlease Enter any Integer Value to get natural no till N(user input) : ");
  	scanf("%d", &Number);
  	
  	printf("\nNumbers from 1 to %d are \n", Number);  	
	while(j <= Number)
  	{
    	printf(" %d \t", j);
    	j++;
  	}
  
  	return 0;
}