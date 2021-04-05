#include<stdio.h>


int main()
{
    int i=1;
    int j,n;
    printf("Enter a num :");
    scanf("%d",&n);
    while(i<=n)
	{
     
        for(j=i;j<=n;j++)
        {
        	printf("*");
		}
        printf("\n");
		i++;
        
    }

    return 0;
}
