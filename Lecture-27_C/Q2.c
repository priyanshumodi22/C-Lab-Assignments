#include <stdio.h>
struct date
{
    int dd;
    int mm;
    int yy;
};
struct employee
{
  int empID;
  int emp_type;
  union 
  {
    struct date dob;
    int age;
  }id;
  float salary;
  int type;
}e[3];
int main()
{
   for(int i=0;i<3;i++)
   {
     printf("Enter the Employee ID of employee %d: ",i+1);
     scanf("%d",&e[i].empID);
     printf("Specify employee type: \n");
     scanf("%d",&e[i].emp_type);
     printf("Press to specify employee age type 0.DOB 1.AGE \n");
     scanf("%d",&e[i].type);
     if(e[i].type==0)
     {
       scanf("%d",&e[i].id.dob.dd);
       scanf("%d",&e[i].id.dob.mm);
       scanf("%d",&e[i].id.dob.yy);
     }
     else
     {
       scanf("%d",&e[i].id.age);
     }
     printf("Enter Salary \n");
     scanf("%f",&e[i].salary);
   }
   printf("\n");
   for(int i=0;i<3;i++)
   {
     printf("The Employee ID of employee %d: %d\n",i+1,e[i].empID);
     if(e[i].type == 0)
     printf("PART TIME employee \n");
     else
     printf("FULL TIME employee \n");
     if(e[i].type==0)
     printf("D.O.B.: %d/%d/%d\n",e[i].id.dob.dd,e[i].id.dob.mm,e[i].id.dob.yy);
     else
     printf("AGE : %d\n",e[i].id.age);
     printf("Salary: %f",e[i].salary);
     printf("\n\n ");
   }
   return 0;
}