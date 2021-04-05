#include <stdio.h>


 int main()
  {
  	int b;
  	printf("Enter the int ");
  	scanf("%d",&b);
  	printf("you have enter %d \n",b);
  	
  	if(b >=1 && b<=100 || b>=1000 && b<=5000)
  	{
  		printf("%d is true",b);
	}
	else
	{
		printf("%d is false",b);
	}
	
	return 0;
  }
