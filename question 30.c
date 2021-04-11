#include <stdio.h>
int main()
{
    int i,j,n;
   
    printf("Enter the number of rows = ");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("%d \t",i*j);
        }
    
        printf("\n");
        
    }
    return 0;
}
