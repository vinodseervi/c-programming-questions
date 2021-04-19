#include <stdio.h>



// nth tum of series

int main()
{
	int a=0,b=1,c,i,n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	
	if(i==1)
	{
	//	printf("%d ",a);
	}
	else if(i==2)
	{
	//	printf("%d ",b);
	}
	else
	{
		
		c=a+b;
		a=b;
		b=c;
	}
    }
    printf("your nth num is : %d ",c);
    return 0;
	 
}
