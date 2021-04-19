#include <stdio.h>

/*
      5
     4
	3
   2
  1
*/    
	  
int main()
{
	int i,j,n;
	printf("Enter the num n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{

		   if(i == j) printf("%d",i);
		   else printf(" ");
		}
	
		printf("\n");
	}
	return 0;
}
