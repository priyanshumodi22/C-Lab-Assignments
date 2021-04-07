#include<stdio.h>
int main()
{
    float f;
    float *ptr;
    printf("Enter float value :: ");
    scanf("%f",&f);
    ptr = &f;
    printf("Address of variable f = %x\n",&f);
    printf("ptr is pointing to an address  %x\n",ptr);
    printf("Value stored at ptr = %f",*ptr);
    return 0;
}