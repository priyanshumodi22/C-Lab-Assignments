#include<stdio.h>
int main()
{
    int array[6];
    int i;
    for(i=0;i<6;i++){
        printf("enter the element:");
        scanf("%d",&array[i]);
    }
    int max=array[0];
    for(i=0;i<6;i++){
        if(max<array[i]){
            max=array[i];
        }
    }
    int max2=array[0];
    for(i=0;i<6;i++){
        if(array[i]<max && max2<array[i]){
            max2=array[i];
        }
    }
    printf("the maximum and the second maximum are:%d and %d",max,max2);
    return 0;
}