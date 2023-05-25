#include<stdio.h>
int b[20];
int merge(int a[],int l,int m,int r) {
    int i=l,j=m+1,k=l;
    while(i<=m && j<=r) {
        if(a[i]>a[j]) {
            b[k]=a[j];
            j++;
        }
        else {
            b[k]=a[i];
            i++;
        }
        k++;
    }
    while(i<=m) {
        b[k]=a[i];
        k++;
        i++;
    }
    while(j<=r) {
        b[k]=a[j];
        k++; 
        j++;
    }
    for(i=l;i<=r;i++)
        a[i]=b[i];
}
int mergesort(int a[],int l,int r) {
    int m=(l+r-1)/2;
    if(l<r) {
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main() {
    int a[20],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    mergesort(a,0,n-1);
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
}