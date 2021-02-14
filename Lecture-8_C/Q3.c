# include<stdio.h>
int main()
{
	int a,b,c,sum;
	float d;
	printf("Enter the price of 1st product: ");
	scanf("%d",&a);
	printf("Enter the price of 2nd product: ");
	scanf("%d",&b);
	printf("Enter the price of 3rd product: ");
	scanf("%d",&c);
    sum=a+b+c;
    printf("%d\n",sum);
	if(sum>=6000)//40
	{
        d=sum*0.4;
        printf("You got 40%% discount.");
		
	}
	 else if(sum>=4000)//30
	{
		d=sum*0.3;
          printf("You got 30%% discount.");
		
	}
	 else if(sum>=2000)//20
	{
		d=sum*0.2;
          printf("You got 20%% discount.");
		
	}
	

	  if((a+b||b+c||a+c)>=5000)//10
	  {
	  	d=sum*0.5;
          printf("You got 50%% discount.");
	  }
	  else if(a+b||b+c||a+c>=3000)//10
	  {
	  	if (sum>=4000 && sum<6000)
	  		{ d=sum*0.4;
                 printf("You got 40%% discount.");
               }
	  	else if (sum>=6000)
	  		{ d=sum*0.5;
                 printf("\nYou got extra 10%% discount.");
               }
	  }
	 
       printf("Amount to be paid: %f",(sum-d));
	return 0;	
}