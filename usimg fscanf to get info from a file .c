#include <stdio.h>

int main(){
	FILE* file;
	
	char name[10];
	int age;
	float average;
	char grade;
	
	printf("Enter the name, age, average and grade of a student\n");
	scanf("%s %d %f %c", &name, &age, &average, &grade);
	
	file = fopen("report.txt", "a");
	
	fprintf(file, "\n%s %d %f %c", name, age, average, grade);
	
	fclose(file);
	
	file = fopen("report.txt", "r");
	
	fscanf(file, "%s %d %f %c", &name, &age, &average, &grade);
	printf("%s %d %f %c", name, age, average, grade);
	
	fclose(file);
	
	return 0;
	
}