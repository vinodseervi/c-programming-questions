#include<stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	int arr[n], i = 0;
	for(;i<n;i++) scanf("%d", &arr[i]);
	
	//logic to get index of last found
	
	//1 2 3 1 4 1
	
	int key;
	scanf("%d", &key);
	
	int lastIndex = -1;
	
	for(i = 0; i < n; i++){
		if(arr[i] == key){
			lastIndex = i;
		}
		
	}
	
	if(lastIndex != -1){
		printf("\n Last Found at index %d", lastIndex);
		
	}
	else {
		printf("Not found");
	}
	
	
}
