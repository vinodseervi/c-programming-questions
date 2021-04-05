#include <stdio.h>


int main()
{
	int a,b;
	printf("Enter value of a\n");
	scanf("%d",&a);
	printf("Enter value of b\n");
	scanf("%d",&b);
	printf("you have enter value \na %d \nb %d\n",a,b);
	
	if(a==b && b==a)
	{
		printf("Your value is equal");
	}
	
    else
    {
    	printf("Your value is non equal");
	}
	
	
	return 0;
	
}
