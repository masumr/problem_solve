#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll bigmod(ll n,ll p){
    if(p==0) return 1;
    if(p==1) return n%10;
    ll t=bigmod(n,p>>1);
    t=(t*t)%10;
    if(p&1) t=(t*n)%10;
    return t;
}
int main(){
    ll n;
    cin>>n;
    cout<<bigmod(1378,n);
}
