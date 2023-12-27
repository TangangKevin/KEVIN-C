#include <stdio.h>

int main(){
	int n = 5, i;
	int myArray[] = {1,2,3,4,5};
	int* pArray = myArray;
	
	for(i = n-1; i >= 0; i--){
		printf("%d ", *(pArray+i));
	}
	
	return 0;
}



