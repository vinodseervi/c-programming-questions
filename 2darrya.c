#include <stdio.h>

int main()
{
	int i,j,n;
	printf("Size of array : ");
	scanf("%d",&n);
	printf("Enter the first matrix : \n");
	int arr[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Enter the second matrix : \n");
	int arra[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arra[i][j]);
		}
	}
	
	printf("your sum of matrix is : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]+arra[i][j]);
		}
		printf("\n");
	}
}
