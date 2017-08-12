#include<bits/stdc++.h>
using namespace std;
const int N=100;
int a[N][N];
int sum[N][N];
int ss[N*N];
int main(){
    int n,m;
    cin>>n>>m;
    memset(sum,0,sizeof sum);
    int x;
    ss[0]=0;
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
            sum[i][j]=sum[i][j-1]+a[i][j];
            ss[k]=ss[k-1]+a[i][j];
            k++;
        }
    }
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    int sk=(l1-1)*m+r1-1;
    int sp=(l2-1)*m+r2;
    int val=ss[sp]-ss[sk];
    cout<<val<<endl;
}
