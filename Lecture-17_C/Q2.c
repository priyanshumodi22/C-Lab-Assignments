#include<stdio.h>
int main ()
{
  int n, count, temp, c, rev=0;
  printf ("Enter a number:");
  scanf ("%d", &n);
  temp=n;
  printf ("The digits of the number are \n");
  while(temp!=0)
  {
      count=temp%10;
      rev=rev*10+count;
      temp=temp/10;
  }
start:
  if (rev>0)
    {
      c = rev%10;  
      printf ("%d ", c);
      rev=rev/10;
      goto start;
    }
  return 0;
}