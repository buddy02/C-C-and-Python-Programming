#include<stdio.h>
#include<stdlib.h>
int f=-1,r=-1,arr[5];
void enqueue() {
    if((f==r+1) || (f==0 && r==4)) 
        printf("Queue is full\n");
    else {
        if(f==-1)  
        f=0;
        printf("\nenter number to enqueue : ");
        r=(r+1)%5;
        scanf("%d",&arr[r]); 
    }
}
void dequeue() {
    if(f==-1)
        printf("Queue is empty\n"); 
    else {
        if(f==r) {
            f==-1;
            r==-1;
        }
        else
            f=(f+1)%5;
    }    
}
void display() {
    int i;
    if(f==-1)
        printf("Queue is empty\n");
    else {
        for(i=f-1;i!=r;i=(i+1)%5) {
            printf("%d ",arr[i+1]);
        }
        printf("\n");
    }
}
int main() {
    int c;
    while(1) {
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&c);
        switch (c)
        {
        case 1: enqueue(); break;
        case 2: dequeue(); break;
        case 3: display(); break;
        case 4: exit(0); 
        default: printf("\nPlease select the correct choice\n");
        }
    }
}