#include<stdio.h>

int main() {
	int n = 5;
	 int arr[5];
	 arr[0] = 5;
	 arr[1] = 2;
	 arr[2] = 3;
	 arr[3] = 8;
	 arr[4] = 5;
	 
	 arr[0] = arr[1]; //1
	 arr[1] =arr[0];  //2
	 arr[3] =arr[1];  //3
	 arr[4] =arr[3];  //4
	 arr[3] =arr[4];  //5
	 arr[4] = 2;   //6
	 
	 //print array
	 
	 int i = 0;
	 for(;;)  {
	     if(i>=n) break;
	     
	 	printf("%d ",&arr+i);
	 	i++;
	}
}
