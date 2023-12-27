#include <stdio.h>

// structure to create each node of the linked list
struct node{
	int data;
	struct node *link; // this is a pointer which is an attribute of the current pointer but which will also be used to point to the next node which will also be a pointer.
};

int main(){
	
	struct node *head; // an instance of the node struct which will create a given node in the list.
	head = malloc(sizeof(struct node)); // using the malloc in-built function to store the space required to create a given node
	head->data = 25; // setting the data attribute of the head node to 25
	head->link = NULL; // setting the link attribute of the head node to point to the next node in the list (which is currently null cuz this is the only node in the list currently, but will be changed later)
	// all the other nodes in the list will follow this same format continuously
	
	struct node *current;
	current = malloc(sizeof(struct node));
	current->data = 40;
	current->link = NULL;
	head->link = current;
	
	struct node *current2;
	current2 = malloc(sizeof(struct node));
	current2->data = 82;
	current2->link = NULL;
	current->link = current2;
	
	printf("%d %d %d\n", head->data, current->data, current2->data);
	printf("%d %d %d\n", head->link, current->link, current2->link);

	return 0;
}