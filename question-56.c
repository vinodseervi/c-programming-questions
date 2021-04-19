 #include <stdio.h>

int main()
{
	int a=0,b=1,c,i,n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	
	if(i==1)
	{
		printf("%d ",a);
	}
	else if(i==2)
	{
		printf("%d ",b);
	}
	else
	{
		
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
    }
  
  
    return 0;
	 
}
