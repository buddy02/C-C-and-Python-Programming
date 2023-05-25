#include<iostream>
using namespace std;
int main() {
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n-i;j++) 
            cout<<"  ";
        for(j=n-i+1;j<=n;j++) 
            cout<<n-j+1<<" ";
        for(j=1;j<=i-1;j++)
            cout<<j+1<<" ";    
        cout<<"\n";
    }
}