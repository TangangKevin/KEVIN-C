#include <stdio.h>

struct Car{
	char name[20];
	char manufacturer[20];
	int seats;
	int year;
};

int main(){
	int i, n=4;
	struct Car c[n];
	
	for(i=0; i<n; i++){
		printf("\nEnter the name, manufacturer, number of seats, and manufacturing year of car %d respectively:\n", i+1);
		scanf("%s %s %d %d", c[i].name, c[i].manufacturer, &c[i].seats, &c[i].year);
	}
	
	printf("\n\n");
	
	for(i=0; i<n; i++){
		printf("%s %s %d %d\n\n", c[i].name, c[i].manufacturer, c[i].seats, c[i].year);
	}
	
	return 0;
}