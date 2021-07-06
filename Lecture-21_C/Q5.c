#include<stdio.h>
#include<stdlib.h>

void main()
{
    int size;
    printf("Please Enter the Size");
    scanf("%d", &size);
    char a[size];
    char b[size];
    char *p=a;
    for(int i=0;i<4;i++)
    {
        scanf("%s", p);
        for(;*p!='\0';p++);
        p++;
    }
    int i;
    int k=0;
    int count=0;
    for(i=0;i<size;i++)
    {
        if(a[i]!='\0')
        {
            b[k]=a[i];
            k++;
        }
        else
        {
            count++;
            if(count==4)
            break;
        }
    }
    b[k]='\0';
    int l;
    for(l=0;b[l]!='\0';l++);
    for(int i=0;i<l;i++)
    {
    printf("%c",b[i]);
    }
    

}
