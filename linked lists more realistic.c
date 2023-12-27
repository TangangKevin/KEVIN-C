 #include <stdio.h>
 #include <stdlib.h>
 
struct node{
	int data;
	struct node *link; 
};

 // function to trverse the list
 void traverse(struct node *head);

int main(){
	
	struct node *head; 
	head = malloc(sizeof(struct node)); 
	head->data = 25; 
	head->link = NULL;
		
	struct node *current;
	current = malloc(sizeof(struct node));
	current->data = 40;
	current->link = NULL;
	head->link = current;
	
	/* for every other node we want to create, we will just re-initialize the 'current' pointer over and over instead of creating a new pointer for every new node.
	re-initialising the 'current' pointer wont replace its previous instances.*/
	
	current = malloc(sizeof(struct node));
	current->data = 82;
	current->link = NULL;
	head->link->link = current;
	
	current = malloc(sizeof(struct node));
	current->data = 99;
	current->link = NULL;
	head->link->link->link = current;
	
	
	printf("%d %d %d %d\n", head->data, head->link->data, head->link->link->data, head->link->link->link->data);
	//printf("%d %d %d\n", head->link, current->link, current2->link);
	traverse(head);

	return 0;
}

void traverse(struct node *head){
	int count = 0;
	
	if(head == NULL){
		printf("The given list is empty");
	}
	else{
		struct node *ptr;
		ptr = head;
		while(ptr != NULL){
			printf("%d ", ptr->data);
			ptr = ptr->link;
			count += 1;
		}
		printf("\n\nThe size of the list is: %d\n", count);
	}
}








