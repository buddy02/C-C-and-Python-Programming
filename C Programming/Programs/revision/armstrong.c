#include<stdio.h>
int main() {
    int n,r,temp,sum=0;
    scanf("%d",&n);
    temp=n;
    while (n!=0)
    {
        r=n%10;
        sum+=(r*r*r);
        n/=10;
    }
    if(sum==temp)
        printf("Number is Armstrong");
    else
        printf("Number is not Armstrong");
}