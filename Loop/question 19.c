#include <stdio.h>

int main()
{
	int i,n;
	printf("Enter starting number ");
  	scanf("%d",&n);
  	printf("you have enter %d \n",n);
	for(i=n;i>0;i--)
	{
		printf("%d \a",i);
	}
	for(i=n;i<0;i++)
	{
		printf("%d \a",i);
	}
	printf("0");
}
