#include<stdio.h>
#include<stdlib.h>
struct std
{
    int m1;
    int m2;
    int m3;
    int max;
    float avg;

};
void cal(struct std *p)
{
    if(p->m1 > p->m2 && p->m1 > p->m3)
    {
        p->max=p->m1;
    }
    else if(p->m2 > p->m1 && p->m2 > p->m3)
    {
        p->max=p->m2;
    }
    else if(p->m3 > p->m1 && p->m3 > p->m2)
    {
        p->max=p->m3;
    }
    p->avg=(p->m1+p->m2+p->m3)/3.0;
}
void display(struct std v1)
{
    printf("\nMarks 1 : %d",v1.m1);
    printf("\nMarks 2 : %d",v1.m2);
    printf("\nMarks 3 : %d",v1.m3);
    printf("\nMax : \t  %d",v1.max);
    printf("\nAvg : %f",v1.avg);
}
void main()
{
    struct std v1={20,40,50};
    struct std v2={24,42,40};
    struct std v3={20,70,30};
    struct std v4={26,30,60};
    cal(&v1);
    cal(&v2);
    cal(&v3);
    cal(&v4);
    display(v1);
    display(v2);
    display(v3);
    display(v4);
}