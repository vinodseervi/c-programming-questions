#include <stdio.h>

int main()
{
	int n,sum1=0,sum2=0,sum3=0;
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
//		printf("%d ",arr[i]);
		if(arr[i]%2==0)
		{
			sum1++;
		}
		else
		{
			sum2++;
		}
		if(arr[i]%3==0)
		{
			sum3++;
		}
	}
	printf("your totel even num is : %d\n",sum1);
	printf("your totel odd num is : %d\n",sum2);
	printf("your totel num of  divisible to 3 : %d",sum3);
	
	return 0;
}
