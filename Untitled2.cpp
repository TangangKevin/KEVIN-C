#include <stdio.h>
#include <string.h>
struct student{
	int id;
	char name[10];
	int age;
	float hieght;
};
int main(){
	struct student s1 = {001, "leo", 24};
	struct student s2 = {002, "blessing", 20};
    struct student s3 = {003, "Dorian", 26};

//	struct  student s2;
	
	s1.id = 256; 
//	s1.name = john;
	strcpy(s2.name, "john");
	printf("enter your age: \n");
	scanf("%d",&s2.age);
	printf("%d, %s, %d: \n",s1.id,s1.name, s1.age  );
	printf("%d, %s, %d: \n",s2.id,s2.name, s2.age  );
	printf("%d, %s, %d: \n",s3.id,s3.name, s3.age );
	

	
}

	
