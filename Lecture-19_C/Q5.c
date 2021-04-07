#include <stdio.h>
int main()
{
     int num;
     printf("Enter Integer :: ");
     scanf("%d",&num);
     int diff1=0, diff2=0;
     int i,j;
     int num1=0, num2=0;
     for(i=num;;i++)
     {
        int c=0;
        for(j=1;j<=i;j++)
        {
          if(i%j==0)
          c++;
        }
        if(c==2)
        {
            diff1=i-num;
            num1=i;
            break;
        }
     }
    for(i=num;;i--)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
          if(i%j==0)
          c++;
        }
        if(c==2)
        {
            diff2=num-i;
            num2=i;
            break;
        }
    }
        printf("The Nearest Prime Number :: ");
        if(diff1<diff2)
        printf("%d",num1);
        else if(diff2<diff1)
        printf("%d",num2);
        else 
        printf("%d %d",num2,num1);
        
  return 0;
}