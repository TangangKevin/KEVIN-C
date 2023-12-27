#include <stdio.h>

char alp;

int main(){
	FILE* fpointer;
	
	fpointer = fopen("kevin.txt", "a");
	fputs("\nhow are you doing?", fpointer);
	fclose(fpointer);
	
	fpointer = fopen("kevin.txt", "r");
	
	if(fpointer == NULL){
		printf("unable to open the file");
	}
	else{
		while(!feof(fpointer)){
			alp = fgetc(fpointer);
			printf("%c", alp);
		}
	}
	
	fclose(fpointer);
	
	return 0;
	
}

