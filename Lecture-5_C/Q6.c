/* Enter a no. like 1199 so that middle no. is either reverse or equal to
   the corner digits.
*/
#include<stdio.h>
int main(){
int num,a,b,c,d,e,f,g;
printf("Enter any 4-digit integer: ");
scanf("%d",&num);
a=num%10;
b=(num/10)%10;
c=(num/100)%10;
d=(num/1000)%10;
e=(c*10+b); 
f=(d*10+a);
g=b*10+c;
printf("%d\n",g);
((f==e) || (f==g))? printf("Number is valid."):printf("Number is not valid.");
return 0;

}