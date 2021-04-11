#include<stdio.h>

int main()
{
	int i,a,n;
	
	
	printf("plzz enter tne num== ");
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
		
	}
	
	
	printf("plzz choose any num\n");
	scanf("%d",&a);
		for (i=0; i<n; i++)
		
		if(a==arr[n])
		{
		   printf("your value is present there\n");
		}
		
		else
		{
			printf("your value is not present there\n");
		}	

	
	return 0;
}
