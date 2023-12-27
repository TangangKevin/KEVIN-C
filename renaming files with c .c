#include <stdio.h>

int main(){
	FILE* file;
		
	file = fopen("names.txt", "r");
	
	// The rename function is suppposed to return a zero is the rename process is successful.
	
	if(rename("temporary.txt", "new.txt") == 0){ // where "temporary" is the name of the file to be renamed and " "new" is the new file name.
		puts("rename successful");
	}
	else{
		puts("rename failed");
	}
	
	fclose(file);
	
	return 0;
	
}