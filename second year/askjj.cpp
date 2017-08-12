#include<bits/stdc++.h>
using namespace std;
const int N=51;
const int C=251;
typedef long long int ll;
ll dp[C][N];
ll a[N];
int n,m;
ll coin_change(int t,int i){
    if(i==m){
        if(t==0)return 1;
        else return 0;
    }
    if(dp[t][i]!=-1)return dp[t][i];
    ll p1=0,p2=0;
    if(t-a[i]>=0)p1=coin_change(t-a[i],i);
    p2=coin_change(t,i+1);
    return dp[t][i]=p1+p2;
}
int main(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++)scanf("%lld",&a[i]);
    memset(dp,-1,sizeof dp);
    printf("%lld\n",coin_change(n,0));
}
