#include <stdio.h>

int main(){
	FILE* file;
	
	char arr[20];
	
	file = fopen("names.txt", "r");
	
	if(file == NULL){
		printf("FILE NOT FOUND");
	}
	else{
		printf("process succeeded\n");
	
	// To print just one name at a time	
//		fgets(arr, 20, file);
//		printf("%s\n", arr);
		
		// to print many names at once
		while(fgets(arr, 20, file)){
			printf("%s\n", arr);		
		}
		
	}
	
	fclose(file);
	
	return 0;
	
}