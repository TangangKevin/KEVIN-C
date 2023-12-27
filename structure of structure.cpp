#include <stdio.h>

struct coord{
	int x;
	int y;
};

struct rectangle{
	struct coord topleft;
	struct coord bottomright;	
};

int main(){
	int  length, width;
	long area;
	
	struct rectangle myBox;
	
	printf("Enter the coordinates of the top left: ");
	scanf("%d %d", &myBox.topleft.x, &myBox.topleft.y);
	
	printf("Enter the coordinates of the bottom right: ");
	scanf("%d %d", &myBox.bottomright.x, &myBox.bottomright.y);
	
	length = myBox.bottomright.x - myBox.topleft.x;
	width = myBox.topleft.y - myBox.bottomright.y;
	area = length * width;
	
	printf("\nThe area of the rectangle is: %ld", area);
	
	return 0;
}