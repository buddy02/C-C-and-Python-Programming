#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    char s[n+1];
    cin.ignore();
    cin.getline(s,n+1);
    int ans=0,cur=0,i=0;
    while(s[i]!='\0') {
        if(s[i] == ' ') {
            if(ans<cur) {
                ans=cur;
            } 
            cur=0;
        }
        else
            cur++;        
        i++;
    } 
    int r=max(ans,cur);
    cout << r;
}