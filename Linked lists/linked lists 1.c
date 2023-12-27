#include <stdio.h>
#include <stdlib.h>

struct Node{
	int x;
	struct Node* next;
};

int main(){
	struct Node root;
	root.x = 15;
	root.next = malloc(sizeof(struct Node));
	root.next->x = -2;
	root.next->next = NULL;
	
	printf("%d, %d", root.x, root.next->x);
	
	return 0;
}