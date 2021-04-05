#include<stdio.h>


int main()
{
    int i=1;
    int j,n;
    printf("Enter a num :");
    scanf("%d",&n);
    while(i<=n) 
	{
     
        for(j=1;j<=n;j++)
        {
        
			if((i+j)<=n)
			{
			
        	printf(" ");
            }
	     	 else
		    {
		 	 printf("*");
			} 
			 
		}
        printf("\n");
		i++;
        
    }

    return 0;
}
