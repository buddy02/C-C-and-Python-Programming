#include<stdio.h>
int x,choice,top,stack[100],i,n;

void push();
void pop();
void display();
void main() {
    top=-1;
    printf("enter the size of the stack : ");
    scanf("%d",&n);
    printf("stack operations using array\n");
    printf("1.Push 2.Pop 3.Display 4.Exit\n");
    do {
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                break;
            }
            default:
            {
                printf("\nInvalid choice\n");
                break;
            }
        }
    }while(choice!=4);
    
}
void push() {
    if (top>=n-1)
        printf("\nSTACK OVERFLOW\n");
    else {
        printf("Enter the value to be pushed : ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop() {
    if (top<=-1)
        printf("\nSTACK UNDERFLOW\n");
    else {
        printf("The popped element is : %d",stack[top]);
        top--;
    }
}
void display() {
    if (top>=0) {
        printf("\nELEMENTS IN THE STACK\n");
        for(i = top ; i >= 0 ; i--)
        printf("%d\t",stack[i]);
    }
        else
 printf("\nEMPTY STACK\n");
}