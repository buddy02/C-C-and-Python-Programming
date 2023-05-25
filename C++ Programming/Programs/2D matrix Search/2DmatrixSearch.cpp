#include<iostream>
using namespace std;
int main()
{
    int n,m,target;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
            cin >> a[i][j];
    }
    cin >> target;
    int r=0,c=m-1;
    bool flag=false;
    while(r < n && c >= 0) {
        if(a[r][c] == target) {
            flag=true;
            break;
        }
        else if(a[r][c] > target) {
            c--;
        }
        else
            r++;
    }
    if(flag)
            cout << "found";
        else    
            cout << "not found";
}