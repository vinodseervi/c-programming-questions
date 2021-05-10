#include <stdio.h>

struct point{
	int x;
	int y;
};

void main()
{
	struct point a ={10,5};
	struct point b ={15,20};
	
	struct point c ={a.x+ b.x,a.y+b.y};
	printf("%d\t%d",c.x,c.y);
	
}
