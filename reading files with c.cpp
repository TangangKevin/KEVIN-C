#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE* Fpointer;
	Fpointer = fopen("helloTK.txt", "w");
	
	if(Fpointer == NULL){
		printf("unable to read file");
	} else{
		printf("file successfully created");
	}
	fclose(Fpointer);
	
	return 0;
}