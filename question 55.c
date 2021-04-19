#include <stdio.h>


int main()
{
	int n,i,j;
	printf("Enter the num : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==!0)
		{
			for(j=(i-1)*n+1;j<=(i*n);j++)
			{
				printf("%d ",j);
			}
		}
		else
		{
			for(j=i*n;j>(i*n)-n;j--)
			{
				printf("%d ",j);
			}
		}
		printf("\n");
		
	}
	return 0;
} 
