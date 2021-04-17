#include <stdio.h>

int main()
{
	int i,n,m,o;
	printf("Enter size of first array : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	
	printf("Enter size of second array : ");
	scanf("%d",&m);
	int arra[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&arra[i]);
		
	}
	
	
	//logic add two array 
	
	o=n+m;
//	printf("%d\n",o);
	int array[o];
	
//	for(i=0;i<o;i++)
//	{
//		if(i<n)
//		{
//			array[i]=arr[i];
//		}
//		else 
//		{
//			array[i]=arra[i-n];
//		}
//		
//	}

//method 2

	//index for bigger array
	int j = 0;
    //process arr or copy array 1 to main array
    for(i = 0; i < n ; i++){
    	array[j] = arr[i];
    	j++;
	}
	
	//copy array 2 into main array from last index
	
	for(i = 0; i < m; i++) {
		array[j] = arra[i];
		j++;
	}
    
    

	for(i=0;i<o;i++)
	{
		printf("%d",array[i]);
	}
	


}

