#include <stdio.h>
int main()
{
    char a[20];
    int b1=0,b2=0,b3=0,b4=0;
    printf("Enter the string: ");
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++)
        b1++;
    a[++b1]='\0';
    printf("Enter the string: ");
    scanf("%s",a+b1);
    b2=b1;
    for(int i=b1;a[i]!='\0';i++)
        b2++;
    a[++b2]='\0';
    printf("Enter the string: ");
    scanf("%s",a+b2);
    b3=b2;
    for(int i=b2;a[i]!='\0';i++)
        b3++;
    a[++b3]='\0';
    printf("Enter the string: ");
    scanf("%s",a+b3);
    b4=b3;
    for(int i=b3;a[i]!='\0';i++)
        b4++;
    a[++b4]='\0';
    printf("%s",a);
    printf("%s",a+b1);
    printf("%s",a+b2);
    printf("%s",a+b3);
    return 0;
}

