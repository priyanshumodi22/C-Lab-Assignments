#include<stdio.h>
int main()
{
   int n,m;
   printf("Enter number of rows and columns:\n");
   scanf("%d%d",&n,&m);
   int a[n][m];
   int i,j;
   for(i=0; i<n; i++) 
   {
     for(j=0;j<m;j++) 
     {
        printf("Enter value for a[%d][%d]:", i, j);
        scanf("%d", &a[i][j]);
     }
   }
   printf("Two Dimensional array elements:\n");
   for(i=0; i<n; i++)
   {
      for(j=0;j<m;j++)
      {
         printf("%d ", a[i][j]);
         if(j==(m-1))
         printf("\n");        
      }
   }
   return 0;
}
