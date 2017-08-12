#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll bigmod(ll n,ll p,ll mod){
    if(p==0)return 1;
    if(p==1)return n;
    ll t=bigmod(n,p>>1,mod);
    t=((t%mod)*(t%mod))%mod;
    if(p&1)t=((t%mod)*(n%mod))%mod;
    return t;
}
ll ot_to_dec(ll n,ll b){
    int k=0;
    ll sum=0;
    while(n){
        sum+=(pow(b,k)*(n%10));
        n/=10;
        k++;
    }
    return sum;
}
ll ot_to_dec_m(string s,ll b,ll mod){
    ll sum=0;
    int k=0;
    for(int i=s.size()-1;i>=0;i--){
        int x=(int)(s[i]-48);
        //cout<<x<<' ';
        sum=(sum+(bigmod(b,k,mod)*x))%mod;
        k++;
    }
    return sum;
}
int main(){
    int b;
    string s;
    ll n;
    while(scanf("%d",&b)&& b!=0){
        cin>>s>>n;
        ll mod=ot_to_dec(n,b);
        //cout<<mod<<endl;
        ll num=ot_to_dec_m(s,b,mod);
        if(num==0){cout<<0<<endl;
        continue;
        }
        vector<int>v;
        while(num){
            v.push_back(num%b);
            num/=b;
        }
        for(int i=v.size()-1;i>=0;i--)cout<<v[i];
        cout<<endl;v.clear();
    }
}
