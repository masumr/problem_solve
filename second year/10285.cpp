#include<bits/stdc++.h>
using namespace std;
const int N=101;
int a[N][N];
int r,c;
int dp[N][N];
int lis(int m,int n){
    if(m==r & n==c)return 0;
    if(dp[m][n]!=-1)return dp[m][n];
     cout<<m<<' '<<n<<endl;
    int p1=0,p12=0,p2=0,p21=0,p3=0,p31=0,p4=0,p41=0;
    if(m-1>=0){
        if(a[m][n]>a[m-1][n])p1=lis(m-1,n)+1;
        else p12=lis(m-1,n);
    }
    else if(n-1>=0){
        if( a[m][n]>a[m][n-1])p2=lis(m,n-1)+1;
        else p21=lis(m,n-1);
    }
    else if(m+1<r){
        if(a[m][n]>a[m+1][n])p3=lis(m+1,n)+1;
        else p31=lis(m+1,n);
    }
    else if(n+1<c){
        if(a[m][n]>a[m][n+1])p4=lis(m,n+1)+1;
        else p41=lis(m,n+1);
    }
    int mx=p1;mx=max(mx,p12);mx=max(mx,p2);mx=max(mx,p21);mx=max(mx,p3);mx=max(mx,p31);mx=max(mx,p4);mx=max(mx,p41);
    return dp[m][n]=mx;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        //memset(vis,0,sizeof vis);
        string s;
        cin>>s;
        memset(dp,-1,sizeof dp);
        scanf("%d%d",&r,&c);
        for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);
        //cout<<1<<endl;
        cout<<s<<": "<<lis(0,0)<<endl;

    }
}
