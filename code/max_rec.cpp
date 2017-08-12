#include<bits/stdc++.h>
using namespace std;
const int N=100;
int a[N][N];
int sum[N][N];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    memset(sum,0,sizeof sum);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i][j];
        }
    }
    for(int i=1;i<=n;i++){]
        for(int j=1;j<=m;j++){
            cout<<sum[i][j]<<' ';
        }
        cout<<endl;
    }
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    int ss=sum[l2][r2]+sum[l1-1][r1-1]-sum[l2][r1-1]-sum[l1-1][r2];
    cout<<ss<<endl;
}
