#include <stdio.h>

int main()
{
	int i,j,n;
	printf("Enter a num : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=1;j--)
		{
			if((i+j-1)>n)
			{
				printf(" ");
				
			}
			else
			{
				printf("%d",j);
			}
		}
		printf("\n");
	}
	return 0;
}
