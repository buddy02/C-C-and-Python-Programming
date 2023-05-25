#include<iostream>
using namespace std;
int main() {
    int n,lastdigit,reverse=0;
    cin>>n;
    while(n!=0) {
        lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n/=10;
    }
    cout<<reverse;
}