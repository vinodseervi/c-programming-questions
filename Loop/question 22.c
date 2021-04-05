#include <stdio.h>

int main()
{
	int i,n,k,sum1,sum2;
	printf("Enter starting range num");
	scanf("%d",&n);
	 
	for(i=1;i<=n;i++)
	{
		if(i*i<=n)
		{
		
        sum1=sum1+1;
        }
        if((i*i*i)<=n)
        {
        	sum2=sum2+1;
		}
    }
    printf("your squqre of numm is %d \n",sum1);
    printf("your cube of num is %d",sum2);
	
	return 0;
}
