#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
int f=-1,r=-1,queue[100],choice,n=100,x;
int main() {
    while(1) {
        printf("\n1.push 2.pop 3.display 4.exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice) {
            case 1: enqueue();  break;
            case 2: dequeue();  break;
            case 3: display();  break;
            case 4: exit(0);
            default: printf("Wrong Choice: please see the options");
        }

    }
}
void enqueue() {
    if (r==n-1)
        printf("\n Queue is Full");
    else {
        printf("\nEnter the value to be inserted: ");
        if (f==-1) {
            f++; 
            r++;
            scanf("%d",&x);
            queue[r]=x;
        }
        else {
            r++;
            scanf("%d",&x);
            queue[r]=x;
        }
    }
}
void dequeue() {
    if(f==-1 || f>r) 
        printf("\n Queue is empty");
    else {
        printf("\nDeleted : %d", queue[f]);
        f++;
    } 
}
void display() {
    int i;
    if(f==-1 || f>r) 
        printf("\n Queue is empty");
    for (i=f;i<=r;i++) {
        printf("%d ",queue[i]);
    }
}
