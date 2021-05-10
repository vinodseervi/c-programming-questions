#include <stdio.h>

struct student
{
	char name[100];
	int age;
	int roll;
};

void main()
{
	int n;
	char pqs;
	 
	printf("Enter First student name age roll \n"); 

	struct student a;
	{
	 	scanf("%[^\n]s%d%d",a.name,&a.age,&a.roll);
    }
    
    printf("Enter Second student name age roll \n");
    scanf("%c",&pqs);
    struct student b;
	{
		scanf("%[^\n]s%d%d",b.name,&b.age,&b.roll);
    }
    printf("Enter Trard student name age roll \n"); 
    scanf("%c",&pqs);
	struct student c;
	{
	 	scanf("%s%d%d",c.name,&c.age,&c.roll);
    }
    
    printf("Enter Fourth student name age roll \n");
    scanf("%c",&pqs);
    struct student d;
	{
		scanf("%s%d%d",d.name,&d.age,&d.roll);
    }


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
