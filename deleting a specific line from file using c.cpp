#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	FILE *file, *temp;
	
	char filename[1000];
	char temp_filename[1000];
	char buffer[2000];	
	int delete_line = 0;
	
	printf("Enter the file: ");
	scanf("%s", filename);
	
	strcpy(temp_filename, "temp____");
	strcat(temp_filename, filename);
	
	printf("Delete line: ");
	scanf("%d", &delete_line);
	
	file = fopen(filename, "r");
	temp = fopen(temp_filename, "w");
	
	if(file == NULL || temp == NULL){
		printf("Error opening file(s)");
		return 1;
	}
	
	bool keep_reading = true;
	int current_line = 1;
	
	do{
		fgets(buffer, 2000, file);
		
		if(feof(file)) keep_reading = false;
		else if(current_line != delete_line){
			fputs(buffer, temp);
		}	
		
		current_line++;
		
	} while(keep_reading);
	
	fclose(file);
	fclose(temp);
	
	remove(filename);
	rename(temp_filename, filename);
	
	return 0;
}