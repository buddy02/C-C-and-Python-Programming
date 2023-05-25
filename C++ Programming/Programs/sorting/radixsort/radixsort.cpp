#include<iostream>
using namespace std;

void countsort(int arr[],int n,int exp)
{
    
    int count[10]={0};
    for(int i=0;i<n;i++)
    {
        count[(arr[i]/exp)%10]++;
    }
    for(int i=1;i<10;i++){
        count[i]+=count[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[(arr[i] / exp) % 10]] = arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }

}

void radixsort(int arr[],int n)
{
    int m=arr[0];
    for(int i=1;i<n;i++){
        if(m<arr[i]){
            m=arr[i];
        }   
    }
    for(int exp=1;m/exp>0;exp*=10){
        countsort(arr,n,exp);
    }

}

int main(){
    int arr[]={98,16,248,524,6,81,1};
    radixsort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}