#include<stdio.h>
int main ()
{
    char a[1000];
    printf("\nPlease Enter The String (NOTE: include a space after last word in string): ");
    scanf("%[^\n]s",a);
    int input;
    printf("Please Enter The Number Of Words : ");
    scanf("%d",&input);
    printf("\n");
    int i;
    for(i=0;a[i]!='\0';i++);
    printf("\n");
    for(int j=0;j<i;j++)
    {
        if(a[j]==' ')
        {
            printf("\n");
        }
        else 
        {
            printf("%c",a[j]);
        }
    }
    printf("\n");
    //i is the length 
    int actl=i-1;
    //actl is the array actual length
    int space,fswitch=0;
    int h=0;
    for(int y=0;y<input;y++)
    {
         for(;a[h]!=' ';h++)
    {
        space++;
    }
    int lswitch=space-1;
    //swapping
    int p=fswitch;
    for(;p<lswitch;p++)
    {
        int temp;
        temp=a[p];
        a[p]=a[lswitch];
        a[lswitch]=temp;
        lswitch--;
    }
    fswitch=space+1;
    h=fswitch;
    space++;
    }
    for(int j=0;j<i;j++)
    {
        if(a[j]==' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c",a[j]);
        }
    }
    return 0;
}