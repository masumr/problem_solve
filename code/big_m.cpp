#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod=100000007;
ll bigmod(ll n,ll p){
    //if(p==0) return 1;
    if(p==1) return n;
    ll num=bigmod(n,p>>1);
    num=((num%mod)*(num%mod))%mod;
    if(p&1) num=((n%mod)*(num%mod))%mod;
    return num;
}
const int s=46346;
bitset<s>a;
vector<ll>v;
void sieve(){
    v.push_back(2);
    for(int i=3;i<=s;i+=2){
        if(a[i]==0){
            v.push_back(i);
            for(int j=i*i;j<=s;j+=i*2)a[j]=1;
        }
    }
}
ll sod(ll n,ll x){
    ll sum=1;
    ll p=mod-2;
    for(int i=0;i<v.size() && v[i]<=n;i++){
        if(n%v[i]==0){
            int count=0;
            while(n%v[i]==0){
                count++;
                n/=v[i];
            }
            sum=(sum*(bigmod(v[i],count*x+1)-1)*bigmod(v[i]-1,p))%mod;
        }
    }
    if(n>1) sum=(sum*(bigmod(n,x+1)-1)*bigmod(n-1,p))%mod;
    return sum;
}
int main(){
        sieve();
        ll n,x;
        while(cin>>n>>x && (n!=0 &&\ x!=0))
            cout<<sod(n,x)<<endl;
}
