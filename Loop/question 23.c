#include <stdio.h>

int main()
{
	int i,n;
	int sum=1;
	printf("Enter a num to print factorial value");
	scanf("%d",&n);
	 
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
    }
    printf("your factorial value is %d",sum);
	
	return 0;
}
