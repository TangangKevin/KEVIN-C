#include <stdio.h>

struct Courses{
	char courseName[20];
};

struct Student{
	char name[15];
	int age;
	Courses course;
};

int main(){
	int i, n;
	
	printf("Enter the number of students: ");
	scanf("%d", &n);
	
	struct Student s[n];
	
	for(i=0; i<n; i++){
		printf("\nEnter the name, age and course of student %d:\n", i+1);
		scanf("%s %d %s", s[i].name, &s[i].age, s[i].course.courseName);	
	}
	for(i=0; i<n; i++){
		printf("\nThe details of student %d are:\n", i+1);
		printf("name: %s,\nage: %d,\ncourse: %s.\n", s[i].name, s[i].age, s[i].course.courseName);;
	}
	
	
	return 0;
}