#include <stdio.h>


int main()
{
	int x,y;
	printf("Enter value of x\n");
	scanf("%d",&x);
	printf("Enter value of y\n");
	scanf("%d",&y);
	printf("you have enter value \nx=%d \ny=%d\n",x,y);
	
	if(x>0 && y>0)
	{
		printf("Your value is quadrant first");
	}
	
    if(x>0 && y<0)
    {
    	printf("Your value is quadrant second");
	}
	
	if(x<0 && y<0)
	{
		printf("Your value is quadrant three");
	}
	
	if(x<0 && y>0)
	{
		printf("Your value is quadrant fourth");
	}
	if(x==0&&y==0)
	{
		printf("your value is horition");
	}
	
	
	return 0;
	
}
