#include<stdio.h> 
    unsigned short int a;
    printf("Write Value of unsigned short int: ");
    scanf("%hu",&a);
    printf("value of unsigned short int is %hu\n",a);
    unsigned int b;
    printf("Write Value of Unsigned int b: ");
    scanf("%u",&b);
    printf("value of unsigned int is %u\n",b);
    unsigned long c;
    printf("Write the value of unsigned long c: ");
    scanf("%lu",&c);
    printf("value of unsigned long %lu\n",c);
    unsigned long long d;
    printf("Write the value of unsigned long long d: ");
    scanf("%llu",&d);
    printf("Value of unsigned long long %llu\n",d);
    //all integers 
    short int e;
    printf("Write the value of short int e: ");
    scanf("%hd",&e);
    printf("Value of short int is %hd\n",e);
    int f = c;
    printf("Write the value of int f: ");
    scanf("%d",&f);
    printf("Value of int is %d\n",f);
    long g = e;
    printf("Write the value of long g: ");
    scanf("%ld",&g);
    printf("Value of long is %ld\n",g);
    long long h = a;
    printf("Write the value of long long h: ");
    scanf("%lld",&h);
    printf("Value of long long is %lld\n",h);
    //Real Values
    float i = b ;
    printf("Write the value of float i: ");
    scanf("%f",&i);
    printf("Value of float is %f\n",i);
    double j = a;
    printf("Write the value of double j: ");
    scanf("%lf",&j);
    printf("Value of double is %lf\n",j);
    long double k = c;
    printf("Write the value of long double: ");
    scanf("%Lf",&k);
    printf("Value of long double is %Lf\n",k);
    //unsigned real values
    unsigned long l = j;
    printf("Write the value of unsigned long l: ");
    scanf("%lu",&l);
    printf("Value of unsigned long is %lu\n",l);
    //character variables and integers
     int n;
    printf("Write a number to find a character: ");
    scanf("%d",&n);
    printf("Value of integer n is %c",n);
    return 0;
    //char remaining

    return 0;
}