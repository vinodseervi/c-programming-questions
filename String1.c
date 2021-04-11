
#include <stdio.h>

int main()
{
	char str[100];
	
	printf("Enter a string");
	
	scanf("%[^\n]s",str);
	
	printf("\nGiven string is : %s", str);
}
