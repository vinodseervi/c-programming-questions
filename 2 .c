#include <stdio.h>

int main()
{
	int a,b;
	printf("Enter value a\n");
	scanf("%d",&a);
	printf("Enter value b\n");
	scanf("%d",&b);
	printf("you have Enter \na %d\nb %d",a,b);
    printf("\nyour minimum value is ");
    
	if(a<b)
	{
	   printf("%d",a);	
	}
	else
	{
	   printf("%d",b);	
	}	
	
	
	
	return 0;
}
