#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h;

    printf("Enter time in hrs and min.:");
    printf("\nEnter hrs: ");
    scanf("%d", &a);
    printf("\nEnter mins: ");
    scanf("%d", &b);
    printf("\nEnter hrs for another time:");
    scanf("%d", &c);
    printf("\nEnter mins for anothe time:");
    scanf("%d", &d);
    if (a > c)
    {
        if (b > d)
        {
            e = b - d;
        }
        else{
            e = d - b;
        }
        f = a - c;
        printf("%d:%d is earlier than %d:%d and the difference is %dhours and %dminutes.", c, d, a, b, f, e);
    }
    else if (c > a)
    {
        if (b > d)
        {
            e = b - d;
        }
        else{
            e = d - b;
        }
        f = c - a;
        printf("%d:%d is earlier than %d:%d and the difference is %dhours and %dminutes.", a, b, c, d, f, e);
    }
    else if (a == c)
    {
        if (b > d)
        {
            e = b - d;
            printf("%d:%d is earlier than %d:%d and the difference is %d minutes.", c, d, a, b, e);
        }
        else{
            e = d - b;
            printf("%d:%d is earlier than %d:%d and the difference is %d minutes.", a, b, c,d, e);
        }
   }

    return 0;
}