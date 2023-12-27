#include <stdio.h>

int main(){
	int arr1[10];
	float arr2[10];
	double arr3[10];
	
	int *ptr1 = &arr1[10];
	float *ptr2 = &arr2[10];
	double *ptr3 = &arr3[10];
	
	printf("arr1     arr2     arr3\n");
	for(int i=0; i<10; i++){
		printf("%d  %d  %d\n", &arr1[i], &arr2[i], &arr3[i]);
	}

	return 0;
}