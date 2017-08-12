#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int coin[]={1,5,10,25,50};
ll dp[30001][10];
int n;
ll coin_change(int i,int n){
    if(i>=5){
        if(n==0) return 1;
        else return 0;
    }
    if(dp[n][i]!=-1) return dp[n][i];
    ll p1=0,p2=0;
    if(n-coin[i]>=0) p1=coin_change(i,n-coin[i]);
    p2=coin_change(i+1,n);
    return dp[n][i]=p1+p2;
}
int main(){
    memset(dp,-1,sizeof dp);
    while(cin>>n){
        ll s=coin_change(0,n);
        if(s==1) printf("There is only %lld way to produce %d cents change.\n",s,n);
        else printf("There are %lld ways to produce %d cents change.\n",s,n);
    }
}
