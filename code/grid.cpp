#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[20][20];
ll grid(ll n,ll m){
    if(!n || !m)return 1;
    if(dp[n][m]!=-1) return dp[n][m];
    return dp[n][m]=grid(n,m-1)+grid(n-1,m)+grid(n-1,m-1);
}
int main(){
     ll n,m;
     memset(dp,-1,sizeof dp);
     while(cin>>n>>m){
        cout<<grid(n,m)<<endl;
     }
}
