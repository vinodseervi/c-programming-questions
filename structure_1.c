#include <stdio.h>

struct Student{
	const int roll;
	int age;
	char sex ;
};
void main()
{
	int a;
	struct Student  a = {.roll = 120, .age = 25, .sex = 'M'};
	struct Student b = {234,46,'F'}; 
	//a.roll = 100;
	
	printf(" a ki age %d\t%d\t %c", a.roll,a.age,a.sex);
	printf("\n b ki age %d\t%d\t %c", b.roll,b.age,b.sex);
	
}
