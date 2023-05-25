// Arrays Challenge-Longest Arithmetic Subarray
#include<iostream>
using namespace std;
int main()
{
    int n,j,ans=2;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int pd=arr[1]-arr[0];
    int cur=2;
    j=2;
    while(j<n) {
        if(pd==arr[j]-arr[j-1])
            cur++;
        else {
            pd=arr[j]-arr[j-1];
            cur=2;
        }
        ans=max(ans,cur);
        j++;
    }
    cout << ans;        
}