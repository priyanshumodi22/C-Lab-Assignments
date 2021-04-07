#include <stdio.h>
int main()
{
    int a = 10;
    int *b;
    int **c;
    b = &a;
    c = &b;
    printf("b = %u\n", b);
    printf("*b = %d\n", *b);
    printf("&b = %u\n", &b);
    printf("*&b = %u\n", *&b);
    printf("c = %u\n", c);
    printf("*c = %d\n", *c);
    printf("&c = %u\n", &c);
    printf("*&c = %u\n", *&c);
    printf("**&c = %u\n", **&c);
    printf("**c = %u\n", **c);
    return 0;
}