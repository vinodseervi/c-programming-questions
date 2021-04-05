#include <stdio.h>

int main()
{
	int i,j,n;
	 
	printf("Enter ending range num");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("* \a");
			
		}
	     printf("\n");
    }
    
	
	return 0;
}
