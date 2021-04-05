#include <stdio.h>

int main()
{
	int i,n1,n2,sum1=0,sum2=0;
	printf("Enter starting range num");
	scanf("%d",&n1);
	printf("Enter ending range num");
	scanf("%d",&n2);
	
	 
	for(i=n1;i<=n2;i++)
	{
		if(i%2==0)
		{
		   sum1=sum1+1;
		   
		}
		else
		{
			sum2=sum2+1;
		}
		
    }
    printf("your even number is %d\n",sum1);
    printf("your odd number is %d",sum2);
	
	return 0;
}
