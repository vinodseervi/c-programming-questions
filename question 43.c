#include <stdio.h>

int main()
{
	int i,j,n,sum=1;
	printf("Enter a num : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i+1;j++)
		{
			printf("%d ",sum);
			sum++;
		}
		
		printf("\n");
	}
	return 0;
}
