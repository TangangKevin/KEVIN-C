#include <stdio.h>
#include <string.h>

struct Car{
	char manu_name[20];
	char engine_type[20];
	int tank_capacity;
};

int main(){
	struct Car c1 = {
		"Mercedes",
		"nvo",
		200
	};

	struct Car c2 = {
		"Lamborghini",
		"mvk",
		500
	};
	
	printf("car 1: %s, %s, %d\n", c1.manu_name, c1.engine_type, c1.tank_capacity);
	printf("car 2: %s, %s, %d\n", c2.manu_name, c2.engine_type, c2.tank_capacity);

	return 0;
}