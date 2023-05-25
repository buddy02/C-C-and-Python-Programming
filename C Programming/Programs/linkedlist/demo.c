#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL;
    head=malloc(sizeof(struct node));
    head->data = 500;
    head->next = NULL;
    printf("%d\n",head->data);

    struct node *current = malloc(sizeof(struct node));
    current->data = 10;
    current->next = NULL;
    head->next = current;
    current = malloc(sizeof(struct node));
    current->data = 20;
    current->next = NULL;
    head->next->next = current;

    printf("%d,%d,%d",head->data,head->next->data,head->next->next->data);
    
}