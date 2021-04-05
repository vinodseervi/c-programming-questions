
#include <stdio.h>

int main()
{
	int i,n,sum=0;
	printf("Enter a number which table you want");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
	  sum=sum+n;
	  printf("%d\n",sum);
	}
	
	return 0;
}
