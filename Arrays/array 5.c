#include <stdio.h>

int main()
{
	int n,sum1=0,sum2=0;
     int i,j;
     
    
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
	for(j=0;j<n;j++)
	{
        scanf("%d",&arr[j]);	   
    }
    for(i=0;i<n;i++)
	{
		sum2=sum2+arr[i];
	}
//	printf("your sum is : %d",sum1);
	printf("\nyour ct1 avg num : %f",sum1/(float)n);
//	printf("your sum is : %d",sum2);
	printf("\nyour ct2 avg num : %f",sum2/(float)n);
}
