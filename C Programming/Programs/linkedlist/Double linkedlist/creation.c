#include<stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *prev;
    struct node *next;
    
}*head,*temp,*ptr;

void main() {
    char ch='y';
    while(ch=='y') {
        struct node *new = malloc(sizeof(struct node));
        printf("enter value");
        scanf("%d",&new->data);   
        new->next=NULL;
        new->prev=NULL;
        if (head==NULL) {
            head=new;
            temp=new;
        }
        else {
            new->prev=temp;
            temp->next=new;
            temp=new;
        }
        printf("enter y or n\n");
        scanf("\n");
        scanf("%c",&ch);

    } 
    
    struct node *p = malloc(sizeof(struct node));
    p->next=head;
    p->prev=NULL;
    p->data=111;
    head->prev = p;
    head=p;
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;

    }
     
}
