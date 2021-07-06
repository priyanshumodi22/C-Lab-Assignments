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
    for(int i=0;i<size;i++)
    {
        a[i]=' ';
    }
    for(int i=0;i<4;i++)
    {
        scanf("%s", p);
        p=p+5;   
    }
    int temp;
    for(temp=19;a[temp]!='\0';temp--);
        int space=0;
    for(int i=0;i<temp;i++)
    {
        if(a[i]==' ')
        {
            space++;
        }
    }
    int i;
    int k=0;
    int count=0;
    for(i=0;i<size;i++)
    {
        if(a[i]!='\0' && a[i]!=' ')
        {
            b[k]=a[i];
            k++;
        }
        else
        {
            count++;
            if(count==4+space)
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
