#include <stdio.h>
struct Number{
	int a;
	int b;
};
int main(){
	struct Number num1;
	struct Number num2;
	struct Number num3;
	
	num1.a = 10;
	num1.b = 5;
	
	num2.a = 5;
	num2.b = 2;
	
	num3.a = num1.a + num1.a;
	num3.b = num1.b + num2.b;
	printf("num3 = %d, %d", num3.a,num3.b);
	
}