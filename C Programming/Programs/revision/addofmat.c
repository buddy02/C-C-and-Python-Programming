#include<stdio.h>
int main() {
    int n1,n2,i,j;
    int a[100][100],b[100][100],c[100][100];
    scanf("%d %d",&n1,&n2);
    for(i=0;i<n1;i++) {
        for(j=0;j<n2;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n1;i++) {
        for(j=0;j<n2;j++)
            scanf("%d",&b[i][j]);
    }
    for(i=0;i<n1;i++) {
        for(j=0;j<n2;j++)
            c[i][j]=a[i][j]+b[i][j];
    }
    for(i=0;i<n1;i++) {
        for(j=0;j<n2;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
}