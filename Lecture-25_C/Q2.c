#include <stdio.h>
struct item 
{
    int itemno;
    int year;
    int quant;
    float price;
    float  dis;
};
int main()
{
    float discount=0.0,tamount;
    int amount=0;
    struct item s[3];
 
    for(int i=0;i<3;i++)
  {
     printf("\nEnter item no.: ");
     scanf("%d",&s[i].itemno);

     printf("\nYear of Production: ");
     scanf("%d",&s[i].year);

     printf("\nQuantity: ");
     scanf("%d",&s[i].quant);

     printf("\nPrice: ");
     scanf("%f",&s[i].price);

     printf("\nDiscount: ");
     scanf("%f",&s[i].dis);
  }
  printf("Item details are: \n");
  for(int i=0;i<3;i++)
 {
    discount+=(((s[i].dis/100)*s[i].price)*s[i].quant); 
    printf("\nItem no. : %d",s[i].itemno);
    printf("\nYear of Production : %d",s[i].year);
    printf("\nQuantity : %d",s[i].quant);
    printf("\nPrice : %f",s[i].price);
    printf("\nDiscount : %f",s[i].dis);
    amount+=s[i].price*s[i].quant;
 }
 tamount=amount-discount;
 printf("\nThe total discount = %f \n",discount);
 printf("The amount to be paid is = %f \n",tamount);
 return 0;
}