#include <stdio.h>

int main()
{
	int i,n,sum=0;
	printf("Enter the int ");
  	scanf("%d",&n);
  	printf("you have enter a number %d \n",n);
  	for(i=1;i<=n;i++)
  	{
  	 sum=sum+i;	
	}
	printf("your sum is %d",sum);
	
	return 0;
}
