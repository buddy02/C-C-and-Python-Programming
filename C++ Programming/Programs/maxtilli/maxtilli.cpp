// Given an array a[] of size n. For every i from 0 to n-1 output max(a[0], a[1],..., a[i]).
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int mx=arr[0];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        mx=max(arr[i],mx);
        cout << mx << " ";
    }
}
