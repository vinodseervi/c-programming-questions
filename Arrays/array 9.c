#include <stdio.h>

int main()
{
	int n;
	
	
     int i;
     
    printf("Enter size of array : ");
    
    scanf("%d",&n);
    
    
	char arr[n];
//	printf("%d",n);
	
	for(i=0; i<n; i++)
	{
		
        scanf("%s",&arr[i]);	   
    }
    for(i=0;i<n;i++)
	{
		if(arr[i]>=97&&arr[i]<=122)
		{
		
		printf("%c",arr[i]-32);
	    }
	    else
	    {
	    	printf("%c",arr[i]);
		}
	}
}
