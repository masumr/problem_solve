#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll siz=1001;
ll dp[siz];
vector<ll>v;
bitset<siz>p;
void sieve(){
    v.push_back(2);
    for(ll i=3;i<=siz;i+=2){
        if(p[i]==0){
            v.push_back(i);
            for(ll j=i*i;j<=siz;j+=i*2)
                p[j]=1;
        }
    }
}
ll prime_factor(ll n){
    ll count=0;
    if(dp[n]!=-1) return dp[n];
    for(ll j=2;j<=n;j++){
        ll s=j;
        if(dp[s]!=-1) count=dp[s];
        else{
            for(ll i=0;i<v.size();i++){
                    if(dp[s]!=-1) {
                        count=dp[s];
                        break;
                    }
                    else{
                        while(s%v[i]==0)
                        {
                            count++;
                            s/=v[i];
                        }
                    }
                    if(s>1) count++;
                    dp[j]=count;
                }
        }
    }
    return dp[n];
}
int main(){
    sieve();
    memset(dp,-1,sizeof(dp));
    ll sum=prime_factor(100);
    ll n;
    while(cin>>n){
        cout<<dp[n]<<endl;
    }
}
