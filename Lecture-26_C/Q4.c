#include <stdio.h>
#include<stdlib.h>
typedef struct
{
    int x;
    int y;
}num;
void func(num *p)
{
    int tmp;
    tmp=p->x;
    p->x=p->y;
    p->y=tmp;
}
int main()
{
    num d1;
    printf("Enter a number: ");
    scanf("%d",&d1.x);
    printf("Enter another number: ");
    scanf("%d",&d1.y);
    printf("\nOld: x=%d y=%d\n",d1.x,d1.y);
    func(&d1);
    printf("New: x=%d y=%d",d1.x,d1.y);
    return 0;
}