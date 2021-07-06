#include <stdio.h>
#include <string.h>
 
struct student 
{
     int id;
     char name[30];
     float marks;
};
 
int main() 
{
     int i;
     struct student s[2];
     for(i=0;i<2;i++)
     {    
          printf("\nEnter details of Student %d",i+1);
          printf("\nEnter Student ID: ");
          scanf("%d",&s[i].id);
          printf("\nEnter Student Name: ");
          scanf("%s",&s[i].name);
          printf("\nEnter Marks percentage: ");
          scanf("%f",&s[i].marks);
     }
     printf("\n\nRecord of Students: ");
     for(i=0;i<2;i++)
     {
          printf("\nStudent %d : ",i+1);
          printf("\nStudent ID: %d",s[i].id);
          printf("\nStudent Name: %s",s[i].name);
          printf("\nStudent Percentage: %f",s[i].marks);
     }
 
     return 0;
}