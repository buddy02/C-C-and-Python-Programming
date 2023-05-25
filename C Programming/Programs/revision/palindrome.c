#include<stdio.h>
int main() {
    int n,r,temp;
    scanf("%d",&n);
    temp=n;
    while (n!=0)
    {
        r=(r*10)+(n%10);
        n/=10;
    }
    if(r==temp)
        printf("Number is Palindrone");
    else
        printf("Number is not a Palindrome");
}