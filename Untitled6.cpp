#include <stdio.h>

struct Part{
	int phone;
	char name[20];
};

int main(){
	struct Part *ptrPart;
	struct Part employee1;
	struct Part employee2;
	struct Part employee3;
	int i;
	struct Part arr[] = {employee1, employee2, employee3};
	
	for(i = 0; i < 3; i++){
		(*ptrPart) = arr[i];
		printf("Enter the phone number and name of emmployee %d respectively:\n", i+1);
		scanf("%d %s", (*ptrPart).phone, (*ptrPart).name);
	}
	
	for(i = 0; i < 3; i++){
		printf("%d %s\n", (*ptrPart).phone, (*ptrPart).name);
	}
	
	return 0;
}