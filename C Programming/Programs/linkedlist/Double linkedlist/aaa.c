#include<stdio.h>
#include<stdlib.h>

struct node  {
	int data;
	struct node* next;
	struct node* prev;
}*head,*p,*new,*ptr;

void main()
{
int i,n,data;
printf("Enter the total number of nodes in list: ");
scanf("%d", &n);
head = (struct node *)malloc(sizeof(struct node));
printf("Data of node 1 : ");
scanf("%d", &data);
head->data = data;
head->next = NULL;
p = head;


for(i=1; i<n; i++)
{
new = (struct node *)malloc(sizeof(struct node));
printf("Data of node %d : ", i+1);
scanf("%d", &data);
new->data = data;
new->next = NULL;

p->next = new; 
p = new; 
}

p->next = head; 
ptr=head;
    do {
        printf("%d ",ptr->data);
        ptr=ptr->next;

    } while(ptr!=head);
}

