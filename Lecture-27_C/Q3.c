#include<stdio.h>
#include<stdlib.h>
int u=1;
struct studentdata 
{
    int roll;
    char name[20];
    int chem;
    int phy;
    int maths;
};
void highstu();
void create(struct studentdata *p)
{
    printf("Please Enter Student Roll no. : ");
    scanf("%d",&p->roll);
    printf("Please Enter Student Name : ");
    scanf("%s",&p->name);
    printf("Please Enter Student Chemistry Marks : ");
    scanf("%d",&p->chem);
    printf("Please Enter Student Physics Marks : ");
    scanf("%d",&p->phy);
    printf("Please Enter Student Maths Marks : ");
    scanf("%d",&p->maths); 
    highstu(p);
    int clear;
    printf("\n\n\nPlease Enter 0 to enter next student details: ");
    scanf("%d",&clear);
    if(clear==0)
    {
        system("cls");
    }
}
void highstu(struct studentdata *p)
{
    if(p->chem > p->phy && p->chem > p->maths)
    {
        printf("\nStudent %d %s got highest in Chemistry which is %d",u,p->name,p->chem);
        u++;
    }
    if(p->phy > p->chem && p->phy > p->maths)
    {
        printf("\nStudent %d %s got highest in Physics which is %d",u,p->name,p->phy);
        u++;
    }
    if(p->maths > p->phy && p->maths > p->chem)
    {
        printf("\nStudent %d %s got highest in Maths which is %d",u,p->name,p->maths);
        u++;
    }
}
int compare(int a,int b,int c,int d)
{
    if(a>b && a>c && a>d)
    return a;
    else if(b>a && b>c && b>d)
    return b;
    else if(c>a && c>b && c>d)
    return c;
    else if(d>a && d>b && d>c)
    return d;
}
void display(struct studentdata *p)
{
    printf("\nStudent Roll no. : %d",p->roll);
    printf("\nStudent Name : %s",p->name);
    printf("\nStudent Chemistry marks : %d",p->chem);
    printf("\nStudent Physics marks : %d",p->phy);
    printf("\nStudent Maths marks : %d",p->maths);
}
void main()
{

    struct studentdata m1[4];
    int c=1;
    for(int i=0;i<4;i++)
    {
        printf("\nStudent %d details : ",c);
        printf("\n");
        create(&m1[i]);
        c++;
    }
    int l = compare(m1[0].chem,m1[1].chem,m1[2].chem,m1[3].chem);
    for(int i=0;i<4;i++)
    {
        if(m1[i].chem==1)
        {
            printf("\nStudent %d %s got highest marks that is %d in Chemistry.",i+1,m1[i].name,m1[i].chem);
            break;
        }   
    }
    l=0;
    l = compare(m1[0].phy,m1[1].phy,m1[2].phy,m1[3].phy);
    for(int i=0;i<4;i++)
    {
        if(m1[i].phy==1)
        {
            printf("\nStudent %d %s got highest marks that is %d in Physics.",i+1,m1[i].name,m1[i].phy);
            break;
        }   
    }
    l=0;
    l = compare(m1[0].maths,m1[1].maths,m1[2].maths,m1[3].maths);
    for(int i=0;i<4;i++)
    {
        if(m1[i].maths==1)
        {
            printf("\nStudent %d %s got highest marks that is %d in Maths.",i+1,m1[i].name,m1[i].maths);
            break;
        }   
    }
    int stunum;
    p:
    printf("\nPlease enter the student no. to view details or enter 0 to exit the program.");
    scanf("%d",&stunum);
    if(stunum!=0)
    {
        display(&m1[stunum-1]);

        goto p;
    }
}