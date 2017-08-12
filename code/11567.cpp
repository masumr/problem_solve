#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<ll,ll>dp;
ll n;
ll fun(ll n){
    if(n==1)return 1;
    if(dp[n])return dp[n];
    ll p1=0,p2=0;
    if(n%2==0)p1=1+fun(n/2);
    else{
        p2=1+min(fun(n+1),fun(n-1));
    }
    //cout<<p1<<' '<<p2<<' '<<n<<endl;
    return dp[n]=p1+p2;
}
int main(){
    while(scanf("%lld",&n)==1){
        ll cnt=1;
        ll s1=1;
        ll ck=0;
        if(n<=2)cout<<n<<endl;
        else{
            cout<<fun(n)<<endl;
        }
    }
}
