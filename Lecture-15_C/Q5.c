#include<stdio.h>
int main()
{
	int n,c1=-1,c2=-1;
    printf("Enter the size of 1-D array: ");
	scanf("%d", &n);
	int a1[n];
    printf("Enter the no. in array: \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a1[i]);
	}

	int x;
    printf("Enter the no. to find out: ");
	scanf("%d", &x);

	for(int i=0;i<n;i++)
	{
		if(a1[i] == x)
			{	++c1;
				printf("%d at %d\n", x, i + 1);
			}
	}
	if(c1==-1)
	{
		printf("NOT FOUND!!!\n");
	}
	

	int a, b;
    printf("Enter the no. of rows and column 2-D array: ");
	scanf("%d %d", &a, &b);

	int a2[a][b];
    printf("\nEnter the no. in array: ");
	for(int i=0;i<a;i++)
	{
		for (int j=0;j<b;j++)
		{
			scanf("%d", &a2[i][j]);
		}
	}
    printf("2-D array is: \n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d ",a2[i][j]);
        }
        printf("\n");
    }

	int y;
    printf("\nEnter the no. to find out: ");
	scanf("%d", &y);

	for(int i=0;i<=a;i++)
    {
		for(int j=0;j<=b;j++)
        {
			if(a2[i][j]==y)
			{
				++c2;
				printf("%d at (%d , %d)\n", y, i + 1, j + 1);
			}
		}
	}
	if(c2==-1)
	{
		printf("NOT FOUND!!!");
	}
	return 0;
}
