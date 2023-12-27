#include <stdio.h>

float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);

int main(){
	
	float num1, num2;
	
	printf("Enter th first number: ");
	scanf("%f", &num1);
	
	printf("Enter th second number: ");
	scanf("%f", &num2);
	
	int result;
	printf("\n Click '1' to add, '2' to subtract, '3' to multiply, and '4' to divide \n");
	scanf("%d", &result);                                             
	        
	switch (result){
		case 1:{
			addition(num1, num2);
			break;
		}
		case 2:{
			subtraction(num1, num2);
			break;
		}
		case 3:{
			multiplication(num1, num2);
			break;
		}
		case 4:{
			division(num1, num2);
			break;
		}
		default:{
			printf("Invalid option");
			break;
		}
	}
	return 0;	
}


float addition(float a, float b){ 
	float c = a + b;
	printf("%f", c);
}
                                 
float subtraction(float a, float b){
	float c = a - b;  
	printf("%f", c);
}

float multiplication(float a, float b){
	float c = a * b; 
	printf("%f", c); 
}

float division(float a, float b){
	float c = a / b;
	printf("%f", c);
}