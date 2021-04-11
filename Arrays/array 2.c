#include <stdio.h>

int main()
{
	int n;
     int i;
    printf("Enter n");
    scanf("%d ",&n);
	int arr[n];
	
	for(i=0;i<n;i++)
	{
        scanf("%d",&arr[i]);	   
    }
    for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
