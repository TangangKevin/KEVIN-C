#include <stdio.h>

struct Student{
	int id;
	char name[15];
	float calculusMark;
	float webProgMark;
	float algebraMark;
	float dsMark;
	float englishMark;
	float average;
};

int main(){
	int i, n;
	float average;
	
	printf("Enter the number of students: ");
	scanf("%d", &n);
	
	struct Student arr[n];
	
	for(i=0; i<n; i++){
		printf("\nEnter the id, name, mark in calculus, mark in web programming, mark in algebra, mark in data structures, and mark in english of student %d respectively\n ", i+1);
		scanf("%d %s %f %f %f %f %f", &arr[i].id, arr[i].name, &arr[i].calculusMark, &arr[i].webProgMark, &arr[i].algebraMark, &arr[i].dsMark, &arr[i].englishMark);
		arr[i].average = (arr[i].calculusMark + arr[i].webProgMark + arr[i].algebraMark + arr[i].dsMark + arr[i].englishMark) / 5;
	}
	
	for(i=0; i<n; i++){
		printf("\n\nThe details of student %d are:\n\n");
		printf("id: %d,\nname: %s,\nmark in calculus: %.2f,\nmark in web programming: %.2f,\n", arr[i].id, arr[i].name, arr[i].calculusMark, arr[i].webProgMark);
		printf("mark in algebra: %.2f,\nmark in data structures: %.2f,\nmark in english: %.2f,\naverage: %.2f,\n\n", arr[i].algebraMark, arr[i].dsMark, arr[i].englishMark, arr[i].average);
	}
	
	// using bubble  sort to sort the students from first to last based on their averages.
	for(i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(arr[j].average < arr[j+1].average){
				Student temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	printf("\nThe ranks of the students are:\n");
	for(i=0; i<n; i++){
		printf("%d. %s : %.2f average\n", i+1, arr[i].name, arr[i].average);
	}
	
	return 0;
}