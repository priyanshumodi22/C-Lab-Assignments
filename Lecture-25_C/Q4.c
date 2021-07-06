#include<stdio.h>
#include<stdlib.h>
struct emp
{
        int id;
        char name[20];
        float sal;
};

int main()
{
    printf("\nThis Programe Is To Take Employee Data");
    struct emp arr[3];
    for(int i=0;i<3;i++)
    {
        printf("\nPlease Enter The Employee Id: ");
        scanf("%d",&arr[i].id);
        printf("\nPlease Enter The Name Of The Employee: ");
        getchar();
        scanf("%[^\n]s",arr[i].name);
        getchar();
        printf("\nPlease Enter The Base Salary Of The Employee: ");
        scanf("%f",&arr[i].sal);
        getchar();
    }
    printf("\nEmpId\tEmpName\tEmpSal\tHra\tDA\tGross\n");
    for(int i=0;i<3;i++)
    {
        printf("%d",arr[i].id);
        printf("\t%s",arr[i].name);
        printf("\t%.1f",arr[i].sal);
        printf("\t%.1f",arr[i].sal*0.10);
        printf("\t%.1f",arr[i].sal*0.15);
        printf("\t%.1f",arr[i].sal+arr[i].sal*0.10+arr[i].sal*0.15);
        printf("\n");
    }
    return 0;
}