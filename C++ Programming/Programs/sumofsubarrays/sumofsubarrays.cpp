// Given an array a[] of size n. Output sum of each subarray of the given array.
#include<iostream>
using namespace std;
int main()
{
    int n,k,sum=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++) {
            sum+=arr[j];
            cout<<sum<<" ";
        } 
    }
}