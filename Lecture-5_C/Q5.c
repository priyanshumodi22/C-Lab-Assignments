/* Enter a no. like 2055 so that the square of middle no. is equal to
   the corner digits.
*/
#include<stdio.h>
int main(){
int num,a,b,c,d,e,f;
printf("write the 4 digit integer ");
scanf("%d",&num);
a=num%10;
b=(num/10)%10;
c=(num/100)%10;
d=(num/1000)%10;
e=(c*10+b);
f=(d*10+a);
(f==e*e)? printf("Number is valid."):printf("Number is not valid.");
return 0;
}