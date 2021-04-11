#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the value of a\n");
	scanf("%d", &a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	printf("Enter the value of c\n");
	scanf("%d",&c);
	printf("you have Enter value \na %d \nb %d \nc %d",a,b,c);
	printf("\nyour minimum value is");

	
	if(a>b && a>c)
	{
		printf("%d",a);
	
	}
	else if(b>c)
	{
		printf("%d",b);
	}
	else
	{
		printf("%d",c);
	}
	
	return 0;
}
