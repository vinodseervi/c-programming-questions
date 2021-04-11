#include <stdio.h>

int main()
{
	int n,a;
     int i;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter numbers in array \n");
	int arr[n];
	for(i=0;i<n;i++)
	{
        scanf("%d",&arr[i]);	   
    }
    printf("Enter a number you want : ");
    scanf("%d",&a);
    int flag = 0;
    for(i=0;i<n;i++)
	{
		if(a==arr[i])
		{
			printf("your number is founded in memoray and your computer memoray add is %d\n",i+1);
			flag = 2;
		}
//		if(i==a)
//		{
//			printf("your number is not found");
//		}
	}
	
	if(flag == 0) {
		printf("not found");
	}
	
}
