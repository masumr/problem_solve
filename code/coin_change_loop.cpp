#include<bits/stdc++.h>
using namespace std;
int main(){
    int n[9];
    memset(n,0,sizeof n);
    int coin[]={2,4};
    n[0]=1;
    int i,j,k;
    for(i=0;i<2;i++){
        for(j=coin[i],k=0;j<=8;k++,j++){
           // cout<<n[k]<<' ';
            n[j]+=n[k];
        }
        cout<<endl;
    }
    for(int i=0;i<=8;i++)cout<<n[i]<<' ';
}
