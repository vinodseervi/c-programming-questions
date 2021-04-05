#include <stdio.h>


int main()
{
	int a,b,c;
	printf("Enter value of a\n");
	scanf("%d",&a);
	printf("Enter value of b\n");
	scanf("%d",&b);
	printf("Enter value of c\n");
	scanf("%d",&c);
	printf("you have enter value \na %d \nb %d\nc %d\n",a,b,c);
	
	if(a*a + b*b ==c*c)
	{
		printf("Your value is triangle and scalene");
	}
	
	else if((a==b)&&(a==c)&&(b==c)) 
    {
    	printf("Your value is equilateral");
	}
	
	
    else if(a==b || a==c || b==c) 
    {
    	printf("Your value is isosceles");
	}
	
	
    else if(a!=b || b!=c || c!=a) 
    {
    	printf("Your value is scalene");
	}

	
	
	return 0;
	
}
