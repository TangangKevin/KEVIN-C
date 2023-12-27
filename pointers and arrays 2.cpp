#include <stdio.h>

int main(){
	int arr[5];
	
	printf("Enter the elements of the array\n");
	for(int i=1; i<5; i++){
		scanf("%d\n", &arr[i]);
	}
	
	int *a = &arr[1];
//	printf("%d", *a);
	int *b = &arr[5];
	int *c = &arr[5];
	
	b = &arr[1];
	a = &arr[5];
	
	
	printf("%d and %d", *a, *b);

	return 0;
}