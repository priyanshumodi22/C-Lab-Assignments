#include<stdio.h>
#include<stdlib.h>
struct student
{
    int roll;
    struct date
    {
        int day;
        int month;
        int year;
    }job,dob;
};
int create(struct student *m1)
{
    printf("\nPlease enter Student roll no. : ");
    scanf("%d",&m1->roll);
    printf("\nPlease enter the date student was born : ");
    scanf("%d",&m1->dob.day);
    printf("\nPlease enter the month student was born : ");
    scanf("%d",&m1->dob.month);
    printf("\nPlease enter the year student was born : ");
    scanf("%d",&m1->dob.year);
    printf("\nPlease enter the date student joined : ");
    scanf("%d",&m1->job.day);
    printf("\nPlease enter the month student joined : ");
    scanf("%d",&m1->job.month);
    printf("\nPlease enter the year student joined : ");
    scanf("%d",&m1->job.year);
    system("cls");
    int age=m1->job.year - m1->dob.year;
    return age;
}

void main()
{
    struct student m1,m2;
    printf("Student 1 Age is : %d",create(&m1));
    printf("Student 1 Age is : %d",create(&m2));
}


