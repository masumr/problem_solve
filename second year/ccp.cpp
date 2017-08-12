#include<bits/stdc++.h>
using namespace std;
const int N=31;
typedef long long int ll;
ll dp[N][N];
ll com(ll n,ll r){
    if(n<r)return 0;
    if(n==r)return 1;
    if(r==1)return n;
    if(dp[n][r]!=-1)return dp[n][r];
    return dp[n][r]=com(n-1,r)+com(n-1,r-1);
}
int main(){
    memset(dp,-1,sizeof dp);
    int n,m,t;
    cin>>n>>m>>t;
    ll sum=0;
    for(int i=4;i<=n;i++){
        if(t-i>=1){
            sum+=com(n,i)*com(m,t-i);
        }
        else break;
    }
    cout<<sum<<endl;

}
