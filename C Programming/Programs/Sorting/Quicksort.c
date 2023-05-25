#include<stdio.h>
int quicksort(int arr[],int l,int r) {
    int pivot=partition(arr,l,r);
    quicksort(arr,l,pivot-1);
    quicksort(arr,pivot+1,r);
}
int partition(int arr[],int l,int r) {
    int i=l,j=r;
    while(l<r) {
        while(arr[i]<=arr[l]) i++;
        while(arr[j]>arr[l]) j++;
        swap(arr,j,l); 
    }
    return 
}
int main() {
    int i,n,arr[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    quicksort(arr,0,n-1);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}