#include<stdio.h>
int main()
{
    char arr[6] = {'A', 'B', 'P', 'Q', 'S'};
    int i,k;
    for(i = 0 ; arr[i] != '\0' ; i++)
    {
        printf("%s \n",arr+i);
    }

    
    for(arr[i] = '\0' ; i >= 0 ; i--)
    {
        printf("%s \n", arr+i);
    }

    printf("\n\n");
     for(i=0;i<5;i++)
      {
          for(k=5-i-1;k>=0;k--)
          {
               printf("%c", arr[k]);
          }
          printf("\n");
      }
    return 0;
}