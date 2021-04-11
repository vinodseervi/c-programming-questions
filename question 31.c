#include <stdio.h>
int main()
{
    int i,j,a,b;
   
    printf("Enter the num to start table = ");
    scanf("%d",&a);
    printf("Enter the num to start table = ");
    scanf("%d",&b);
    
	for(i=1; i<=10; i++)
    {
        for(j=a; j<=b; j++)
        {
            printf("%d \t",i*j);
        }
    
        printf("\n");
        
    }
    return 0;
}
