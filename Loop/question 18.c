#include <stdio.h>

int main()
{
	int i,a,b,k,sum=0;
	printf("Enter starting range num");
	scanf("%d",&a);
	printf("Enter ending range num");
	scanf("%d",&b);
	printf("Enter a num to jump int ");
	scanf("%d",&k);
	 
	for(i=a;i<=b;i=i+k)
	{ 
		   printf("%d\n",i);
     	   sum=sum+1;
    }
    printf("your sum is %d",sum);
	
	return 0;
}
