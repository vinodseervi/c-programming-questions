#include <stdio.h>

int main()
{
	int i,j,n,a,temp;
     
    printf("Size of array : \n");
    scanf("%d",&n);
    printf("Enter rotation num : ");
	scanf("%d",&a);
	int arr[n];
	printf("Enter the array valure : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	//logic to rotation

	for(j=0;j<a;j++)
	{
	
     temp=arr[0];
     for(i=0;i<n-1;i++)
     {
     	arr[i]=arr[i+1];
   	 
     }
       arr[n-1]=temp;
}
    
	
	
	
	
	for(i=0;i<n;i++)
    {
	   printf("%d",arr[i]);
    }
	
	return 0;
}
