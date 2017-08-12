#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod=100000007;
int main(){
    int t,c=0;
    scanf("%d",&t);
    ll a[1001];
    vector<ll>v1,v2;
    while(t--){

        memset(a,0,sizeof a);
        ll taka,co_n,n;
        scanf("%lld%lld",&co_n,&taka);
        for(int i=0;i<co_n;i++){
            scanf("%lld",&n);
            v1.push_back(n);
        }
        for(int i=0;i<co_n;i++){
            scanf("%lld",&n);
            v2.push_back(n);
        }
        ll dp[taka+1][co_n+1];
        memset(dp,0,sizeof dp);
        dp[0][0]=1;
        for(int i=0;i<co_n;i++){
            for(int j=0;j<=n;j++){
                ll co=0;
                for(int k=0;k<v2[i];k++){
                    cout<<dp[co][i]<<' ';
                    if(co+j<=taka) dp[co+j][i]=(dp[co+j][i]+dp[co][i])%mod;
                }
                co+=v1[i];
            }
        }
        cout<<endl;
        printf("Case %d: %d\n",++c,dp[taka][co_n]);
        v1.clear();v2.clear();
    }
}
