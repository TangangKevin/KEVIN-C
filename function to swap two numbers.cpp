#include <stdio.h>

void swap(int a, int b){
	int c = a;
	a = b;
	b = c;
	printf("\nAfter the swapping, the first number is %d and the last number is %d", a, b);
}

int main(){
	int num1, num2;
	
	printf("Enter the value of num1: ");
	scanf("%d", &num1);
	
	printf("\nEnter the value of num2: ");
	scanf("%d", &num2);
	
	swap(num1, num2);
	
	return 0;
}