#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int n=1000001;
bitset<1000001>s;
vector<ll>a;
void prime(){
    a.push_back(2);
    for(ll i=3;i<=n;i+=2){
        if(s[i]==0){
            a.push_back(i);
            for(ll j=i*i;j<=n;j+=i){
                s[j]=1;
            }
        }
    }
}
ll power(ll n,ll p){
    if(p==0) return 1;
    if(p==1) return n;
    ll t=power(n,p>>1);
    t*=t;
    if(p&1) t*=n;
    return t;
}
int main(){
    prime();
    int x;
    while(cin>>x){
        ll sum=0;
        for(ll i=0;i<a.size();i++){
            int y=1;
            ll m=a[i];
            while(x>=m)
            {
                sum+=x/m;
                m=pow(a[i],++y);
            }
            //if(x<a[i]) break;
        }
        cout<<sum<<endl;
    }
}
