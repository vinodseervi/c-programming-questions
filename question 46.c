#include<stdio.h>
/*
   A
   B B
   C C C
   D D D D
   E E E E E

    */
int main()
{
	int i;
	int j;
	int n;
	printf("plzz enter num\n");
	scanf("%d",&n);
	
	for (i=1; i<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
		
			printf("%c",i);
		}
		printf("\n");
	}
	return 0;
}
