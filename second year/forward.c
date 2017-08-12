#include<stdio.h>
int main(){
    double a[100],b[100][100];
    int n,i,j;
    printf("Press n:\n");
    scanf("%d",&n);
    printf("A B\n");
    for(i=0;i<n;i++){
        scanf("%lf%lf",&a[i],&b[i][0]);
    }
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            b[j][i]=b[j+1][i-1]-b[j][i-1];
        }
    }
    for(i=0;i<n;i++){
        printf("%.2lf\t",a[i]);
        for(j=0;j<n-i;j++){
            printf("%.2lf\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
