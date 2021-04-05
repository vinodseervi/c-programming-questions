#include <stdio.h>


int main()
{
	int a;
	printf("Enter value of a\n");
	scanf("%d",&a);
    printf("you have enter value \na %d\n",a);
	
	if(a>0)
	{
		printf("Your value is positive");
	}
	
    if(a<0)
    {
    	printf("Your value is negative");
	}
	if(a==0)
	{
		printf("Your value is zero");
	}
	
	
	return 0;
	
}
