#include <stdio.h>

int main()
{
	int a,d,n,i,b;
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of d : ");
	scanf("%d",&d);
	printf("Enter value of n : ");
	scanf("%d",&n);

    //nth term
    
    //nth = a + (n-1)*d
    
    int nth = a + (n - 1) * d;
    
    printf("%d th term is %d\n",n,nth);


   // print till nth number
   
   for(i = 1; i<= n; i++){
   	
   	  printf("%d ",a);
   	  a = a+d;
   	
   }
}
