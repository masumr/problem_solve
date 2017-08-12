#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<ll,ll>mp;
ll rec(ll n){
    if(n==0){
        return 0;
    }
    if(mp[n])return mp[n];
    return mp[n]=max(n,rec(n/2)+rec(n/3)+rec(n/4));
}
int main(){
    ll n;
    while(scanf("%lld",&n)==1)printf("%lld\n",rec(n));
}
