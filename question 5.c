#include <stdio.h>


int main()
{
	int english,hindi,ss,science,maths;
	int a=500,b=100;
	printf("Enter marks of english\n");
	scanf("%d",&english);
	printf("Enter marks of hindi\n");
	scanf("%d",&hindi);
    printf("Enter marks of ss\n");
	scanf("%d",&ss);
	printf("Enter marks of science\n");
	scanf("%d",&science);
	printf("Enter marks of maths\n");
	scanf("%d",&maths);
	printf("you have enter value \n english %d \n hindi %d\n",english,hindi,ss,science,maths);
	printf(" sum %d+%d+%d+%d+%d=%d \n",english,hindi,ss,science,maths,english+hindi+ss+science+maths);
	printf("multi %d \n",(english+hindi+ss+science+maths)*b);
	printf("divide %f",((english+hindi+ss+science+maths)*b)/(float)a);
	


	
	
	
	return 0;
	
	

	
}
