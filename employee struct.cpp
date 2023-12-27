#include <stdio.h>
#include <string.h>

struct Employees{
	char firstname[15];
	char lastname[15];
	int age;
	int dob;
	char position[15];
	float salary;
};

int main(){
	int i, n;
	float tax;
	
	printf("Enter the number of employees: ");
	scanf("%d", &n);
	
	struct Employees arr[n];
	
	for(i=0; i<n; i++){
		printf("\nEnter the firstname, lastname, age, DOB, position, and salary of employee %d\n", i+1);
		scanf("%s %s %d %d %s %f", arr[i].firstname, arr[i].lastname, &arr[i].age, &arr[i].dob, arr[i].position, &arr[i].salary);
	}
	
			
	for(i=0; i<n; i++){
		printf("\n\nThe details for employee %d are:\n\n", i+1);
		
		if(strcmp(arr[i].position, "manager") == 0){
			tax = 0.1 * arr[i].salary;
		}
		else if(strcmp(arr[i].position, "sales_man") == 0){
			tax = 0.05 * arr[i].salary;
		}
		else if(strcmp(arr[i].position, "deliverer") == 0){
			tax = 0.03 * arr[i].salary;
		}
		else if(strcmp(arr[i].position, "secretary") == 0){
			tax = 0.075 * arr[i].salary;
		}
		else{
			printf("Position not avialable in this company\n");
		}
		
		printf("firstname: %s,\nlastname: %s,\nage: %d,\nDOB: %d,\nposition: %s,\nsalary: %.2ffrs,\ntax: %.2ffrs\n\n", arr[i].firstname, arr[i].lastname, arr[i].age, arr[i].dob, arr[i].position, arr[i].salary, tax);
		tax = 0;
		
	}
	
	return 0;	
}