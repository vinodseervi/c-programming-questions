#include <stdio.h>

int main()
{
	int i,a,b;
	printf("Enter starting range num");
	scanf("%d",&a);
	printf("Enter ending range num");
	scanf("%d",&b);
	  printf("even num is\n");
	for(i=a;i<=b;i++)
	{
	    if(i%2==0){
		   
		   printf("%d\n",i);
	
     	}
     	
    }
	
	return 0;
}
