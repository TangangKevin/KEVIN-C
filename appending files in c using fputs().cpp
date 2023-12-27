#include <stdio.h>
#include <stdlib.h>

int main(){
	char name[15];
	int age;
	
	FILE* Fpointer;
	Fpointer = fopen("helloTK.txt", "a");
	
	if(Fpointer == NULL){
		printf("unable to read file");
	} else{
		fputs("\nhello", Fpointer);
	}
	fclose(Fpointer);
	
	return 0;
}