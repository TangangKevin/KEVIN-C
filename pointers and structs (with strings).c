#include <stdio.h>
#include <string.h>

struct Message{
	char *ptr1;
	char *ptr2[30];
} text;

int main(){
	text.ptr1 = "I love myself";
	
	//strcpy(text.ptr2, "And I love God too");
	
	//printf("%s", text.ptr1);
	
	puts(text.ptr1);
	//puts(text.ptr2);
	
	return 0;	
}