#include <stdio.h>

int main()
{
	int n,sum1=0,sum2=0;
     int i,j,c,d;
     
    //input
    printf("Enter size of array : ");
    scanf("%d",&n);
    
	int arr[n];
	
	for(i=0;i<n;i++)
	{
        scanf("%d",&arr[i]);	   
    }
    
    
    //logic
     c=arr[0];
     d=arr[0];
    for(i=1;i<n;i++)
	{
		if(c<arr[i])
		{
			c=arr[i];
		}
		
		if(d>arr[i])
		{
			d=arr[i];
		}
	}
   printf("your max value is %d\n",c);
   printf("your min value is %d\n",d); 
}
