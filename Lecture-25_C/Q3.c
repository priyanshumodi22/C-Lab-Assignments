#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct date D1;
    struct date D2;
    printf("Enter date 1: ");
    scanf("%d",&D1.day);
    printf("Enter month 1: ");
    scanf("%d",&D1.month);
    printf("Enter year 1: ");
    scanf("%d",&D1.year);

    printf("Enter date 2: ");
    scanf("%d",&D2.day);
    printf("Enter month 2: ");
    scanf("%d",&D2.month);
    printf("Enter year 2: ");
    scanf("%d",&D2.year);
    
    if(D2.year<D1.year)
    {
        printf("%d/%d/%d is earlier.",D2.day,D2.month,D2.year);
    }
    else if(D1.year<D2.year)
    {
        printf("%d/%d/%d is earlier.",D1.day,D1.month,D1.year);
    }
    else
    {
        if(D2.month<D1.month)
        {
            printf("%d/%d/%d is earlier.",D2.day,D2.month,D2.year);
        }
        else if (D1.month<D2.month)
        {
            printf("%d/%d/%d is earlier.",D1.day,D1.month,D1.year);
        }
        else
        {
            if(D2.day<D1.day)
            {
                printf("%d/%d/%d is earlier.",D2.day,D2.month,D2.year);
            }
            else if (D1.day<D2.day)
            {
                printf("%d/%d/%d is earlier.",D1.day,D1.month,D1.year);
            }
            else
            {
                printf("both dates are same");
            }
                   
        }       
    }   
    return 0;
}