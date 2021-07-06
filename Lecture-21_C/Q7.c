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
    //taking length and spaces
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
    printf("\nTemp Is : %d\n",temp);
    //taking reverse
    char new[size];
    for(int i=0;i<size;i++)
    {
        new[i]=' ';
    }
    int j=0;
    int fin=0;
    for(int i=0;i<temp+1;i++)
    {
        if(a[i]=='\0')
        {
            int count=0;

            int u=i-1;
        for(;u>=0 && a[u]!=' ' && j<temp;j++)
        {
            new[j]=a[u];
            u--;
            count++;
        }
        fin=fin+5;
        int dif=fin-j;
        j=j+dif;
        new[i]='\0';
        }
    }

    //taking number of spaces
    
//removing \0
    int i;
    int k=0;
    int count=0;
    for(i=0;i<size;i++)
    {
        if(new[i]!='\0' && new[i]!=' ')
        {
            b[k]=new[i];
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
