#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[51];
ll fib(int a){
    if(a==0) return dp[a]= 1;
    if(a==1) return dp[a]=1;
    if(a==2) return dp[a]=2;
    if(dp[a]!=-1) return dp[a];
    return dp[a]=fib(a-1)+fib(a-2);
}
int main(){
    ll n;
    memset(dp,-1,sizeof(dp));
    ll s=fib(50);
    ll sum[50];
    sum[0]=0;
    sum[1]=1;
    for(int i=2;i<46;i++)
        sum[i]=sum[i-1]+dp[i-1];
    while(cin>>n){
        if(n==-1) return 0;
        cout<<sum[n]<<' '<<sum[n+1]<<endl;
    }
}
