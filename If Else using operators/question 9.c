#include <stdio.h>


 int main()
  {
  	char b;
  	printf("Enter the char ");
  	scanf("%c",&b);
  	printf("you have enter %c \n",b);
  	
  	if(b >='a' && b<='z' || b>=65 && b<=90)
  	{
  		printf("%c is true, alphabet.",b);
	}
	else
	{
		printf("%c is false, not alphabet.",b);
	}
	
	return 0;
  }
