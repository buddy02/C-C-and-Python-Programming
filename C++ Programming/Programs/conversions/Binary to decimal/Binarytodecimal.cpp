#include<iostream>
using namespace std;
int main() {
    int n,ans=0,j=1;
    cin >> n;
    while(n>0) {
        ans+=(j*(n%10));
        j*=2;
        n/=10;
    }
    cout << ans;
}