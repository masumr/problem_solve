#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[10000];
ll catalan(ll n){
    if(n<=1) return 1;
    if(dp[n]!=-1) return dp[n];
    ll res=0;
    for(ll i=0;i<n;i++){
        res+=catalan(i)*catalan(n-i-1);
    }
    return dp[n]=res;
}
int main(){
    int n;
    memset(dp,-1,sizeof(dp));
    cin>>n;
    cout<<catalan(n-1)<<endl;
}
