#include <stdio.h>

int main(){
	FILE *file;

	
	int status;
	
	status = remove("old.txt");
	
	if(status == 0){
		puts("file successfully deleted\n");
	} else{
		puts("file successfully deleted\n");
	}	
	
	return 0;
	
}