#include<stdio.h>
int main()
{
    int a, b , c , s;
    printf("Enter any 3 number: ");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)&&(a<c) ? (s=a):(a>c)&&(a<b) ? (s=a):(b>a)&&(b<c)
    ? (s=b):(b>c)&&(b<a) ? (s=b):(s=c);

    printf("2nd minimum number is: %d",s);

    return 0;
}
 