#include <stdio.h>

int main()
{
	int a,d,n,i,b=0;
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
   	  b=b+a;
   	
   }
   printf("\nyour sum of ap is : %d",b);
}


//#include<stdio.h>
//int main ()
//{
//	int a,b,c,n;
//	printf("plzz the enter straing num\n");
//	scanf("%d",&a);
//	printf("plzz the enter defrence num\n");
//	scanf("%d",&b);
//
//	printf("plzz the enter ending num\n");
//	scanf("%d",&n);
//	
//	for(c=0;c<=n;c++)
//	{
//		printf("%d\n",a+c*b);
//	}
//	return 0;
//}
