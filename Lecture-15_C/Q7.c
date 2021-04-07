#include<stdio.h>
int main()
{
  int input;
  int i,j,n,m;
  int c,d;
  printf("Enter no. of rows:");
  scanf("%d", &m);
  printf("\nEnter no. of columns:");
  scanf("%d",&n);
  int arr[n][m];
  printf("\nEnter values to the matrix:\n");
  for (i=0;i<m;i++)
  {
     for (j=0;j<n;j++)
     {
          printf("\nEnter a[%d][%d] value:",i,j);
          scanf("%d", &arr[i][j]);
     }
  }
  printf("Enter row number:");
  scanf("%d", &c);
  printf("\nEnter column number:");
  scanf("%d",&d);     
  for(int k=c-1;k<c+2;k+=2)
  {
    if(k>-1 && k<m) 
    printf("%d ",arr[k][d]);
  }
  for(int l=d-1;l<d+2;l+=2)
  {
    if(l>-1 && l<n)
    printf("%d ",arr[c][l]);
  }
  if(d-1>-1 && c-1>-1)
   printf("%d ",arr[c-1][d-1]);
  if(d+1<n && c+1<m)
   printf("%d ",arr[c+1][d+1]);
  if(d-1>-1 && c+1<m)
   printf("%d ",arr[c+1][d-1]);
   if(d+1<n && c-1>-1)
   printf("%d ",arr[c-1][d+1]);
  return 0;
}
