#include<stdio.h>
float cal(float a,float b, char c)
{
    float k;
    if(c=='*')
    {
        k=a*b;
        return k;
    }
    else if(c=='/')
    {
        k=a/b;
     return k;
    }
    else if(c=='+')
    {
        k=a+b;
    return k;
    }
    else if(c=='-')
    {
      k=a-b;
     return k;
    }
}
int main()
{
    float x,y;
    char s;
    printf("Enter the type of calculation you want (+,-,*,/): ");
    scanf("%c",&s);
    printf("Enter two numbers: ");
    scanf("%f %f",&x,&y);
    printf("\nInput: %.1f %c %.1f",x,s,y);
    printf("\nOutput: %.1f",cal(x,y,s));
  return 0;
}