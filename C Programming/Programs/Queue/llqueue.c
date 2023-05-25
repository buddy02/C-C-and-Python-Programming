#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
}*front=NULL,*rear=NULL,*temp,*p;
int x;
void insert();
void del();
void display();
void main() {
	int choice;
	while(choice!=4) {
		printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice) {
			case 1:insert();   break;
			case 2:del();   break;
			case 3:display();  break;
			case 4:exit(0);
			default : printf("\nEnter valid choice");
		}

	}
}
void insert() {
	p=malloc(sizeof(struct node));
	printf("Enter the value to be inserted: ");
	scanf("%d",&x);
	p->data=x;
	p->next=NULL;
	if(front==NULL) {
		front=p;
		rear=p;
	}
	else {
		rear->next=p;
		rear=p;
	}
}
void del() {
	if(front==NULL)
		printf("\nQueue is Empty\n");
	else {
		temp=front;
		front=front->next;
		printf("\ndeleted element: %d\n",temp->data);
		free(temp);
	}

}
void display() {
	if(front==NULL)
		printf("\nQueue is Empty\n");
	else {
		p=front;
		printf("Elements in Queue: ");
		while(p!=NULL) {
			printf("%d ",p->data);
			p=p->next;
		}
	}
}
