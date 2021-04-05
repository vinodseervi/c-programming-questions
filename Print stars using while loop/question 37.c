#include<stdio.h>


int main()
{
    int i=0;
    int j,n;
    printf("Enter a num :");
    scanf("%d",&n);
    while(i<=n) 
	{
     
        for(j = 0; j<=i; j++){
       	 printf(" ");
	   }
	   for(j = 1; j <= n-i; j++){
	   	printf("*");
	   }
        printf("\n");
		i++;
        
    }

    return 0;
}
