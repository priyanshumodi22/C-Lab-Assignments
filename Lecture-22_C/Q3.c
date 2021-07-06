#include<stdio.h>
int f(int x)
{
    int f = 1;
    if(x==0||x==1)
    {
        return 1;
    }
    else
    {
        for( ;x>=2;x--)
        {
            f = f*x;
        }
        return f;
    }
}
int main()
{
    float res;
    res = 1.0/f(1) + 1.0/f(3) + 1.0/f(5) + 1.0/f(7);
    printf("Result = %f",res);
    return 0;
} 