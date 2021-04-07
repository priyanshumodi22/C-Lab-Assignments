#include<stdio.h>
#include<stdlib.h>

void main ()
{
    char a[20];
    printf("\nPlease Enter The String: ");
    scanf("%[^\n]s",a);
    printf("%s ",a);
    int i,j=0,w;
    for(i=0;a[i]!='\0';i++);
    for(int l=0;a[l]!='\0';l++)
    {
        if(a[l]==' ')
        {
            j++;
        }

    }
    w=j+1;
    printf("\nThe Number Of Words Are %d",w);
    printf("\nThe Number Of Letter Are %d",i-j);
    printf("\nThe Number Of Spaces Are : %d",j);


}