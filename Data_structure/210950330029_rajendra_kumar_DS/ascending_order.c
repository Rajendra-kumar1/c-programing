//Write a C linked list program to add a new node to the ascending order.
#include<stdio.h>
#include<stdlib.h>

struct node{
	int val;
	int insert_sortedll;
	struct node *next;
};

// function to display linked list
void displayll(struct node *root){
	struct node *temp = root;
	printf("\nLinkedList: ");
	while(temp!=NULL){
		printf("%d -> ",temp->val);
		temp = temp->next;
	}
	printf("NULL\n\n");
}

// Function to insert a new value - val into linked list head.
struct node* insert_sortedll(struct node *head, int val){
	
	struct node *ptr;
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->val = val;
	temp->next = NULL;
	
	if(head==NULL){
		head = temp;	
	}
	else if(temp->val <= head->val){
		temp->next = head;
		head = temp;
	}
	else{
		ptr = head;
		while(ptr->next!=NULL&&ptr->next->val<temp->val){
			ptr = ptr->next;
		}
		temp->next = ptr->next;
		ptr->next = temp;
	}
	
	return head;
	
}

int main() {

	struct node *head = NULL;
	
	printf("Insert 9 into the LinkedList \n");
	head = insert_sortedll(head, 9);
	printf("Insert 6 into the LinkedList \n");
	head = insert_sortedll(head, 6);
	printf("Insert 13 into the LinkedList \n");
	head = insert_sortedll(head, 13);
	
	displayll(head);
	
	printf("Insert 8 into the LinkedList \n");   //add a new node to ascending order
	head = insert_sortedll(head, 8);
	
	displayll(head);
}

