#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll ot_con_dec(string n,int b){
    int x=n.size();
    int k=x-1;
    ll sum=0;
    for(int i=0;i<x;i++)
        sum+=((n[i]-48)*pow(b,k--));
    return sum;
}
ll power(ll n,ll p,ll m){
    if(p==0) return 0;
    if(p==1) return n;
    ll t=power(n,p>>1,m);
    t=((t%m)*(t%m))%m;
    if(p&1) t=((t%m)*(n%m))%m;
    return t;
}
ll dec_to_ot(ll n,ll b){
    int k=0;
    ll sum=0;
    while(n!=0){
        sum+=(n%b)*pow(10,k++);
        n/=b;
    }
    return sum;
}
ll ot_con_dec_update(string n,ll b,ll mod){
    int x=n.size();
    int k=x-1;
    ll sum=0;
    for(int i=0;i<x;i++){
        sum+=(((n[i]-48)%mod)*(power(b,k--,mod)%mod))%mod;
        sum%=mod;
    }
    return sum;
}
int main(){
    string a,b;
    ll n;
    while(cin>>n){
        if(n==0) break;
        cin>>a>>b;
        ll mod=ot_con_dec(b,n);
        ll sum=ot_con_dec_update(a,n,mod);
        cout<<dec_to_ot(sum,n)<<' '<<sum<<endl;
    }

}
