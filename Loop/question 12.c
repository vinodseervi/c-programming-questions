#include <stdio.h>

int main()
{
	int i,n;
	printf("Enter a number which table you want");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
	
		printf("%d \n",n*i);
	}
	return 0;
}
