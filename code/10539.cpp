#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mx=1000012;
ll t,x,y;
vector<ll>v;
bitset<mx>p;
void sieve(){
    for(ll i=3;i*i<=mx;i+=2)if(p[i]==0)for(ll j=i*i;j<=mx;j+=(i<<1))p[j]=1;
    v.push_back(2);
    for(ll i=3;i<=mx;i+=2)if(p[i]==0)v.push_back(i);
}
ll almostprime(ll x,ll y){
    ll count=0;
    for(int i=0;i<v.size() && v[i]*v[i]<=y;i++){
        ll sum=v[i]*v[i];
        while(x>sum)sum*=v[i];
        while(y>=sum){sum*=v[i];count++;}
    }
    return count;
}
int main(){
    sieve();
    cin>>t;
    while(t--){
        cin>>x>>y;
        cout<<almostprime(x,y)<<endl;
    }
}
