#include <stdio.h>

int main()
{
	int a,d,n,i;
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of d : ");
	scanf("%d",&d);
	printf("Enter value of n : ");
	scanf("%d",&n);
	printf("your ap is : ");
	for(i=a;i<=n;i=i+d)
	{
	    if(d!=0)
	    {
		
		printf("%d ",i);
		
		}
		
	}
	for(i=a;i<=n;i++)
	{
		if(d==0)
		{
			printf("%d",a);
		}
	}

}
