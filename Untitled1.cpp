#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, j, k;
	int arr[10][10][10];
	
	for(i=0; i<10; i++){
//		printf("The elements of the %d arry are:\n",i);
		for(j=0; j<10; j++){
			printf("The elements of the %d arry are:\n",i);
			for(k=0; k<10; k++){
				printf("%d\n", rand());		
			}
			getchar();
		}
//		getchar();	
	}
	
	return 0;
}