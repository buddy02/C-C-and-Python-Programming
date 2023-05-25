#include<stdio.h>
#define size 5
int front=-1,rear=-1;
int isfull() {
    if((front == 0 && rear == size-1) || (front == rear+1))
        return 1;
    return 0;
}
int isempty() {
    if(front == -1)
        return -1;
    return 0;
}
void enqueue(int ) {
    if(isfull)
        printf("Queue is full");
    else {
        if(front == -1)  front=0;
        else {
            
        }

    }
        printf("")
}
int main() {

}