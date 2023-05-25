#include<iostream>
using namespace std;
int main() {
    int n,i=0;
    cin >> n;
    char s[n+1];
    cin >> s;
    while(s[i] == s[n-1-i] && i<=n/2) {
        i++;
    }
    if(i == ((n/2)+1)) 
        cout << "Palindrome";
    else 
        cout << "Not Palindrome";
}