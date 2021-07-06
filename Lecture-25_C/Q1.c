#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    int sem;
    float cgpa;
};
int main()
{
  
    struct student s;
    
    printf("Enter The Information of Students :\n\n");
    
    printf("Enter Name : ");
    scanf("%s",s.name);
    
    printf("Enter Roll No. : ");
    scanf("%d",&s.roll);

    printf("Enter semenster : ");
    scanf("%d",&s.sem);    

    printf("Enter CGPA: ");
    scanf("%f",&s.cgpa);
    
    printf("\nDisplaying Information\n");
    
    printf("Name: %s\n",s.name);
    printf("Roll: %d\n",s.roll);
    printf("SEMESTER: %d\n",s.sem);
    printf("CGPA: %.2f\n",s.cgpa);
    return 0;
}