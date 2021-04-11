#include <stdio.h>

int main()
{
	char str[100];
	scanf("%s",str);
//	printf("%s",str);
     int len = 0,i;
     while(str[len] != '\0')	{
     	
     	len++;
	 }
//	 printf("%d",len);
     for(i=len-1;i>=0;i--)
	 	printf("%c ",str[i]);
	
}
