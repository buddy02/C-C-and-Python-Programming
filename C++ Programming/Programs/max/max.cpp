#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,4,3,2,1,3,2,7,9};
    int k=arr[0],n=9;
    for(int i=0;i<n;i++){
        if(k<arr[i]){
            k=arr[i];
        }
    }
    cout<<k;
    
    return 0;

}
