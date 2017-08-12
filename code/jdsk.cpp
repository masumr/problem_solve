#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod=pow(2,32);
bitset<100000007>p;
vector<ll>v;
void sieve(){
    v.push_back(2);
    for(ll i=3;i*i<=100000007;i+=2){
        if(p[i]==0){
            for(ll j=i*i;j<=100000007;j+=(i*2)){
                p[j]=1;
            }
        }
    }
    for(ll i=3;i<=100000007;i+=2){
        if(p[i]==0) v.push_back(i);
    }
}
int main(){
    sieve();
    int t,c=0;
    cin>>t;
    while(t--){
        ll n,i;
        cin>>n;
        printf("Case %d: ",++c);
        ll sum=1;
        for(i=0;v[i]<=n;i++){
            ll s=v[i];
            while(s*v[i]<=n){
                s*=v[i];
            }
            sum=((sum%mod)*(s%mod))%mod;
        }
        cout<<sum<<endl;
    }
}
