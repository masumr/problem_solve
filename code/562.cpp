#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n;
ll dp[103][100000];
ll a[9999];
ll s1;
ll napscak(ll  i,ll cost,ll s1){
    if(i==n+1) return 0;
    if(dp[i][cost]!=-1)return dp[i][cost];
    ll p1=0,p2=0;
    if(cost+a[i]<=s1) p1=napscak(i+1,cost+a[i],s1)+a[i];
    p2=napscak(i+1,cost,s1);
    dp[i][cost]=max(p1,p2);
    return dp[i][cost];
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
        memset(dp,-1,sizeof dp);
        scanf("%lld",&n);
        ll sum=0;
        for(ll i=1;i<=n;i++){
            ll x;
            scanf("%lld",&a[i]);
            sum+=a[i];
        }
        s1=(sum/2);
        ll ans=napscak(1,0,s1);
        cout<<ans<<' '<<sum<<' '<<s1<<endl;
        printf("%lld\n",sum-(ans*2));
    }
}
