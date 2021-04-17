#include <stdio.h>

int main()
{
	int n,i,j;
	printf("Size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	//logic to reverse Array
	for(i=0;i<n/2;i++)
	{
		int temp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-1-i] = temp;
	}
	
	for(i = 0; i < n; i++)	{
		
		printf("%d",arr[i]);
	}

}

