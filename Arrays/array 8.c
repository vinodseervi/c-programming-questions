#include <stdio.h>

int main()
{
	int n,sum1=0,sum2=0;
     int i;
     
    
    printf("Enter num for subject: ");
    scanf("%d",&n);
    
	int arr[n];
	printf("Enter ct1 num\n");
	for(i=0;i<n;i++)
	{
        scanf("%d",&arr[i]);	   
    }
    for(i=0;i<n;i++)
	{
		sum1=sum1+arr[i];
	}
    
    printf("Enter ct2 num\n");
	int arra[n];
	for(i=0;i<n;i++)
	{
        scanf("%d",&arra[i]);	   
    }
    for(i=0;i<n;i++)
	{
		sum2=sum2+arra[i];
	}
	
	for(i=0;i<n;i++)
	{
		printf("\nyour sum of ct1 + ct2 / sub : ");
		printf("%d\n",arr[i]+arra[i]);
	}
	
	
	
	printf("your sum is : %d",sum1);
	printf("\nyour ct1 avg num : %0.2f\n\n",sum1/(float)n);
	printf("your sum is : %d",sum2);
	printf("\nyour ct2 avg num : %0.2f",sum2/(float)n);
}
