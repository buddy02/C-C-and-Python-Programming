#include<stdio.h>
char a[20],*c;
int top=-1,x;
void push(char c) {
    a[++top]=c;
}
char pop() {
    if(top==-1)
        return -1;
    else 
        return a[top--];
}
int alnum(char c) {
    if((c>='a' && c<='z') || (c) )
}
int main() {
    scanf("%s",a);
    c=a;
    while (*c!='\0')
    {
        if(alnum(*c))
            printf("%d",c);
        else if(*c=='(')
            push(c);
        else if(*c==')') {
            while((x=pop())!='(')
                printf("%d",x);
        }
        else {
            while(pre(top)>=pre(*c)) {
                printf("%d",pop());
            }
        }
    }
}