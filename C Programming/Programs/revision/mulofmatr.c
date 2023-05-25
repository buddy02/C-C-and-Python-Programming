#include<stdio.h>
int main() {
    int n1,n2,n3,i,j,k;
    int a[100][100],b[100][100],c[100][100];
    scanf("%d %d %d",&n1,&n2,&n3);
    for(i=0;i<n1;i++) {
        for(j=0;j<n2;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n2;i++) {
        for(j=0;j<n3;j++)
            scanf("%d",&b[i][j]);
    }
    for(i=0;i<n1;i++) {
        k=0;
        for(k=0;k<n3;k++) {
            c[i][k]=0;
            for(j=0;j<n2;j++) {
                c[i][k]+=(a[i][j]*b[j][k]);
            }
        }
    }
    for(i=0;i<n1;i++) {
        for(j=0;j<n2;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
}