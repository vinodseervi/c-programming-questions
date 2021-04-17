 #include <stdio.h>

int main()
{
	int n,i,j,c;
	printf("Size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	// logic short in the array
	
	for(i=0;i<n;i++)
	{
		c=arr[i];
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				c = arr[i];    
               arr[i] = arr[j];    
               arr[j] = c;
				
			}
		
		}
		printf("%d ",arr[i]);
	}
}
