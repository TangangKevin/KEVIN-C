#include <stdio.h>
#include <stdlib.h>

int main(){
	char name[5];
	int age;
	
	printf("Enter your name\n");
	scanf("%s", name);
	
	printf("Enter your age\n");
	scanf("%d", &age);
	
	
	FILE* Fpointer;
	Fpointer = fopen("helloTK.txt", "a");
	
	if(Fpointer == NULL){
		printf("unable to read file");
	} else{
		fprintf(Fpointer, "%s\t%d\n", name, age);
		printf("data successfully appended in file");
	}
	fclose(Fpointer);
	
	return 0;
}