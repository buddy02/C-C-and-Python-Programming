#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head;
    head=malloc(sizeof(struct node));
    head->data=50;
    printf("%d",head->data);
}