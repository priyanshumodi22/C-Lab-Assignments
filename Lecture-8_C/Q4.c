#include<stdio.h>
int main()
{
    int a , nd , yr;
    printf("Enter month number: ");
    scanf("%d",&a);
    printf("Enter year: ");
    scanf("%d",&yr);

    switch(a)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: nd=31;
               break;
        case 2: if(((yr % 4 == 0) && (yr % 100!= 0)) || (yr%400 == 0))
               { 
                 nd=29;
               }
               else
               {
                  nd=28;
               }
              break;
        case 4:
        case 6:
        case 9:
        case 11: nd=30;
               break;
        default: printf("INVALID INPUT!!!"); 
    }
     printf("\nNo. of days in the month %d : %d",a,nd);

    return 0;
}