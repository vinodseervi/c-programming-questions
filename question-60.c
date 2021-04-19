#include <stdio.h>

/*
      1
     2
	3
   4
  5
*/    
	  
int main()
{
	int i,j,n;
	printf("Enter the num n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=1;j--)
		{

		   if(i == j) printf("%d",i);
		   else printf(" ");
		}
	
		printf("\n");
	}
	return 0;
}
