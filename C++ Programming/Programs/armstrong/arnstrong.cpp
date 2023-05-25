#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n,lastdigit,sum=0;
    cin>>n;
    int originaln=n;
    while(n!=0) {
        lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n/=10;
    }
    if(sum==originaln) 
        cout<<"Armstrong number";
    else
        cout<<"Not Armstrong";
}