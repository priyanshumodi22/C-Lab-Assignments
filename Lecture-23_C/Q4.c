#include<stdio.h>
#include<stdlib.h>

int word(char a[],int size)
{
    int count=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            count++;
        }
    }
    
    return count;
}
void main()
{
    int size;
    printf("Please Enter The Size");
    scanf("%d",&size);
    char a[size];
    printf("\nPlease Enter The String ");
    getchar();
    scanf("%[^\n]s",a);
    printf("\nThe Number Of Words Present Are: %d ",word(a,size)+1);
}