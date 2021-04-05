#include <stdio.h>

int main()
{
	int i,a,b,k;
	printf("Enter starting range num");
	scanf("%d",&a);
	printf("Enter ending range num");
	scanf("%d",&b);
	printf("Enter a num ");
	scanf("%d",&k);
	 
	for(i=a;i<=b;i=i+k)
	{
		   printf("%d\n",i);
     	
    }
	
	return 0;
}
