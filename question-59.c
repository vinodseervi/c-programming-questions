#include <stdio.h>


// simple 2D matrix
int main()
{
	int i,j,n,m;
	printf("Size of array : ");
	scanf("%d",&n);

	int arr[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&
			arr[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}


