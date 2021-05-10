#include <stdio.h>

struct student
{
	char name[100];
	int age;
	
};

void main()
{
	int n;
	char pqs;
	 
	printf("Enter First student name age \n"); 
    struct student a;
	
	 	scanf("%s%d",a.name,&a.age);
    
    
    printf("Enter Second student name age \n");
    scanf("%c",&pqs);
    struct student b;
	
		scanf("%s%d",b.name,&b.age);
    
    printf("Enter Trard student name age \n"); 
    scanf("%c",&pqs);
	struct student c;
	
	 	scanf("%s%d",c.name,&c.age);
    
    
    printf("Enter Fourth student name age \n");
    scanf("%c",&pqs);
    struct student d;
	
		scanf("%s%d",d.name,&d.age);
    


	printf("which age less then are you print name : ");
	scanf("%d",&n);

	if(a.age <= n)
	{
		printf("\n%s\n",a.name);
	}
	if(b.age <= n)
	{
		printf("\n%s\n",b.name);
	}
	if(c.age <= n)
	{
		printf("\n%s\n",c.name);
	}
	if(d.age <= n)
	{
		printf("\n%s\n",d.name);
	}
	
		
	return;
	
 
}
