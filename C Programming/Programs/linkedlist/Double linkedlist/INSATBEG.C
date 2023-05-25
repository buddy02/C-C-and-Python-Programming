#include<stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *prev;
    struct node *next;
    
}*head,*temp,*ptr;

int main() {
    char ch;
    while(ch=='y') {
        struct node *nw = (struct node*)malloc(sizeof(struct node));
        printf("enter value");
        scanf("%d",&nw->data);   
        nw->next=NULL;
        nw->prev=NULL;
        if (head==NULL) {
            head=nw;
            temp=nw;
        }
        else {
            nw->prev=temp;
            temp->next=nw;
            temp=nw;
        }
        printf("enter y or n\n");
        scanf("\n");
        scanf("%c",&ch);

    } 
    ptr=head;

    while(ptr!=NULL){
        printf("mamaaaa %d",ptr->data);
        ptr=ptr->next;

    }
    return 0;
     
}