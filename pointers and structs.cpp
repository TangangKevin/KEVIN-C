#include <stdio.h>

struct Point{
	int *ptr1;
	int *ptr2;
};

int main(){
	int add;
	struct Point first;
	int a = 10, b = 20;
	first.ptr1 = &a;
	first.ptr2 = &b;
	add = *first.ptr1 + *first.ptr2;
	printf("%d + %d = %d", *first.ptr1, *first.ptr2, add);
	
	return 0;
}