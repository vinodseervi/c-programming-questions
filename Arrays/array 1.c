#include <stdio.h>

int main()
{ 
     int n;
     int i;
    printf("Enter n");
    scanf("%d",&n);
	char arr[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%c",&arr[i]);
		
		
	}
	for(i=0;i<n;i++)
	{
		printf("%c",arr[i]);
	}
}
