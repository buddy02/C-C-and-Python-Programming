#include<stdio.h>
#include<stdlib.h>

struct node  {
	int data;
	struct node* next;
	struct node* prev;
}*head,*p,*new,*ptr,*temp;
void delatbeg() {
    temp=head;
    head=head->next;
    free(temp);
}
void printlist() {
    ptr=head;
    while(ptr!=NULL) {
        printf("%d ",ptr->data);
        ptr=ptr->next;

    } 
}
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
head->prev = NULL;
p = head;
for(i=1; i<n; i++)
{
new = (struct node *)malloc(sizeof(struct node));
printf("Data of node %d : ", i+1);
scanf("%d", &data);
new->data = data;
new->next = NULL;
new->prev = p;
p->next = new; 
p = new; 
}
printf("before deletion\n");
printlist();
printf("\nafter deletion\n");
delatbeg();
printlist();
}