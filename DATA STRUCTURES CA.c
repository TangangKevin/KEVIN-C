#include <stdio.h>

struct CA_marks{
  float ca_dsa;
  float ca_web_prog;
  float ca_networking;
  float ca_average;
};
struct exam_marks{
  float ex_dsa;
  float ex_web_prog;
  float ex_networking;
  float ex_average;	
};
struct practical_marks{
  float p_dsa;
  float p_web_prog;
  float p_networking;
  float p_average;
};
struct student{
  char name[20];
  char matricule[15];
  char sex;
  struct CA_marks CA_marks;
  struct exam_marks exam_marks;
  struct practical_marks practical_marks;
  float average;
};

void addNewStudent(struct student *arr, int n);
void enterCAMarks(struct student *arr, int n);
void enterExamMarks(struct student *arr, int n);
void enterPracticalMarks(struct student *arr, int n);
void calculateAverage(struct student *arr, int n);
void rankStudents(struct student *arr, int n);
void displayResults(struct student *arr, int n);
void displayResultsToConsole(struct student *arr, int n);

int main(){
  int n;
  printf("How many new students do you want to add?: ");
  scanf("%d", &n);

  struct student arr[n];

  addNewStudent(arr, n);
  enterCAMarks(arr, n);
  enterExamMarks(arr, n);
  enterPracticalMarks(arr, n);
  calculateAverage(arr, n);
  rankStudents(arr, n);
  displayResults(arr, n);
  displayResultsToConsole(arr, n);

  return 0;
}

void addNewStudent(struct student *arr, int n){
  int  i;

  for(i=0; i<n; i++){
    printf("\nEnter the name, matricule and sex of student %d (for the sex, enter 'M' for male and 'F' for female).\n", i+1);
    scanf("%s %s %c", arr[i].name, arr[i].matricule, &arr[i].sex);
  }
  printf("Student(s) successfully created\n\n");
}

void enterCAMarks(struct student *arr, int n){
  int i;
  for(i=0; i<n; i++){
    printf("Enter the CA marks of student %d in Data Structures, web Programming amd Networking respectively\n", i+1);
    scanf("%f %f %f", &arr[i].CA_marks.ca_dsa, &arr[i].CA_marks.ca_web_prog, &arr[i].CA_marks.ca_networking);
    arr[i].CA_marks.ca_average = (arr[i].CA_marks.ca_dsa + arr[i].CA_marks.ca_web_prog + arr[i].CA_marks.ca_networking ) / 3;
  }
}

void enterExamMarks(struct student *arr, int n){
  int i;
  for(i=0; i<n; i++){
    printf("Enter the exam marks of student %d in Data Structures, web Programming amd Networking respectively\n", i+1);
    scanf("%f %f %f", &arr[i].exam_marks.ex_dsa, &arr[i].exam_marks.ex_web_prog, &arr[i].exam_marks.ex_networking);
    arr[i].exam_marks.ex_average = (arr[i].exam_marks.ex_dsa + arr[i].exam_marks.ex_web_prog + arr[i].exam_marks.ex_networking) / 3;
  }
}

void enterPracticalMarks(struct student *arr, int n){
  int i;
  for(i=0; i<n; i++){
    printf("Enter the practicals marks of student %d in Data Structures, web Programming amd Networking respectively\n", i+1);
    scanf("%f %f %f", &arr[i].practical_marks.p_dsa, &arr[i].practical_marks.p_web_prog, &arr[i].practical_marks.p_networking);
    arr[i].practical_marks.p_average = (arr[i].practical_marks.p_dsa + arr[i].practical_marks.p_web_prog + arr[i].practical_marks.p_networking) / 3;
  }
}

void calculateAverage(struct student *arr, int n){
  int i;

  for(i=0; i<n; i++){
    arr[i].average = (arr[i].CA_marks.ca_average + arr[i].exam_marks.ex_average + arr[i].practical_marks.p_average) / 3; 	
  }	
}

void rankStudents(struct student *arr, int n){
  int i, j;
  struct student temp;

  for(i=0; i<n; i++){
    for(j=0; j<n-i; j++){
      if(arr[j].average < arr[j+1].average){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

void displayResults(struct student *arr, int n){
  int i;

  FILE *tk;

  tk = fopen("results.txt", "w");
  if(tk != NULL){
//    fprintf(tk, "\n\n===============================================================================================================================\n");
//    fprintf(tk, "Name\t\t\t\Matricule\t\t\tSex\t\t\tCA\t\t\tPracticals\t\t\tExam\t\t\tAverage\t\t\tRank\n");
//    fprintf(tk, "===============================================================================================================================\n");

	fprintf(tk, "\n\n==========================================================================================================\n");
    fprintf(tk, "Name\tMatricule\tSex\tCA\tPracticals\tExam\tAverage\tRank\n");
    fprintf(tk, "==============================================================================================================\n");


 for(i=0; i<n; i++){
      fprintf(tk, "%s   %s\t   %c\t   %.2f\t   %.2f\t   %.2f\t   %.2f\t   %d\n", arr[i].name, arr[i].matricule, arr[i].sex, arr[i].CA_marks.ca_average, arr[i].practical_marks.p_average, arr[i].exam_marks.ex_average, arr[i].average, i+1);
 }
  }
  else{
    printf("file open not successful");
  }
  fclose(tk);
  
}

void displayResultsToConsole(struct student *arr, int n){
		FILE* file;
	
	
	file = fopen("results.txt", "r");
	
	if(file == NULL){
		printf("FILE NOT FOUND");
	}
	else{
		printf("process succeeded\n");
	
		// to print many names at once
		while(fgets(arr, 500, file)){
			printf("%s\n", arr);		
		}
		
	}
	
	fclose(file);
}
