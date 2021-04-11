#include <stdio.h>

int main()
{
	int n,sum=0;
     int i;
     
    
    printf("Enter n");
    scanf("%d ",&n);
	int arr[n];
	
	for(i=0;i<n;i++)
	{
        scanf("%d",&arr[i]);	   
    }
    
    //logic
    for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("your sum is : %d",sum);
	printf("\nyour avg : %f",sum/(float)n);
}
