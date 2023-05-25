#include<iostream>
using namespace std;
int main() {
    int n,ans=0,j=1,A=10,B=11,C=12,D=13,E=14,F=15;
    cin >> n;
    while(n>0) {
        ans+=(j*(n%10));
        j*=16;
        n/=10;
    }
    cout << ans;
}