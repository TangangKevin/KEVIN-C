#include <stdio.h>

int main(){
	int age = 25;
	int *ptr = &age;
	
	printf("the age is %d and the address is %d\n\n", age, &age);
	printf("The age is %d and the address is %d", *ptr, ptr);
		
	return 0;
}