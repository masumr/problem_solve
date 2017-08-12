#include<bits/stdc++.h>
using namespace std;
int dp[102][102];
int lcs(string a,string b,int m,int n){
    if(m==0 || n==0)return 0;
    if(dp[m][n]!=-1) return dp[m][n];
    if(a[m-1]==b[n-1])  return dp[m][n]=1+lcs(a,b,m-1,n-1);
    else return dp[m][n]=max(lcs(a,b,m-1,n),lcs(a,b,m,n-1));
}
int main(){
    string a,b;
    int c=0;
    while(getline(cin,a)){
        if(a=="#")break;
        memset(dp,-1,sizeof dp);
        getline(cin,b);
        int m=a.size();
        int n=b.size();
        printf("Case #%d: you can visit at most %d cities.\n",++c,lcs(a,b,m,n));
    }
}
