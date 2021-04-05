#include <stdio.h>


int main()
{
	int i,a,b,sum1=0,sum2=0,sum3=0;
	printf("Enter starting range num");
	scanf("%d",&a);
	printf("Enter ending range num");
	scanf("%d",&b);

	 
	for(i=a;i<=b;i++)
	{
		if((i%2==0 || i%3==0) )
		{
			sum1=sum1+1;
		}
		if(i%7==0)
		{
			sum2=sum2+1;
		}
	
    }
   printf("2 & 3 %d \n",sum1);
   printf("7 %d \n",sum2);

	
	return 0;
}
