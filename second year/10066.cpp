#include<bits/stdc++.h>
using namespace std;
int dp[103][103];
int lcs(int a[],int b[],int m,int n){
    if(m==0 || n==0) return 0;
    if(dp[m][n]!=-1)return dp[m][n];
    if(a[m-1]==b[n-1])return dp[m][n]=1+lcs(a,b,m-1,n-1);
    else return dp[m][n]=max(lcs(a,b,m-1,n),lcs(a,b,m,n-1));
}
int main(){
    int m,n,c=0;
    int a[107],b[107];
    while(scanf("%d%d",&m,&n)&&(m&&n)){
        for(int i=0;i<m;i++)scanf("%d",&a[i]);
        for(int i=0;i<n;i++)scanf("%d",&b[i]);
        memset(dp,-1,sizeof dp);
        printf("Twin Towers #%d\n",++c);
        printf("Number of Tiles : %d\n\n",lcs(a,b,m,n));
    }
}
