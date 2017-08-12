#include<bits/stdc++.h>
using namespace std;
void multriply(int f[2][2],int m[2][2]){
    int t[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            t[i][j]=0;
            for(int k=0;k<2;k++){
                t[i][j]+=f[i][k]*m[k][j];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            f[i][j]=t[i][j];
        }
    }
}
void power(int f[2][2],int m[2][2],int p){
    if(p==1) return;
    power(f,m,p/2);
    multriply(f,f);
    if(p&1)multriply(f,m);
}
int main(){
    int f[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&f[i][j]);
        }
    }
    int p;
    scanf("%d",&p);
    power(f,f,p);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",f[i][j]);
        }
        printf("\n");
    }
}
