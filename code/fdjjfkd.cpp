#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>sieve(ll n){
    bitset<n>p;
    for(ll i=3;i*i<=n;i++)if(!p[i])for(ll j=i*i;j<=n;j+=(i*2))p[j]=1;
    vector<ll>v;
    v.push_back(2);
    for(ll i=3;i<=n;i+=2)if(!p[i])v.push_back(i);
    return v;
}
bool prime
int main(){
    ll n;
    cin>>n;
    ll kk=sqrt(n)+1;
    vector<ll>v=sieve(kk);

}
