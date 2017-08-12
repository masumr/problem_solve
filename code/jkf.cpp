#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
    ll m,b;
    cin>>m>>b;
    ll x=max(m*b,b);
    ll y=min(m*b,b);
    ll mx=0;
    ll a=x/y;
    ll vk=(x/y);
    //cout<<x<<' '<<y<<endl;
    for(ll i=b-1;i>=1;i--){
        ll sum=0;
        //cout<<a<<endl;
        for(ll j=i;j>=1;j--){
            sum+=((a+1)*j+(a*(a+1))/2);;
           // cout<<((a+1)*j+(a*(a+1))/2)<<' ';
        }
        //cout<<endl;
        sum+=(a*(a+1))/2;
       // cout<<sum<<' ';
        mx=max(mx,sum);
        a+=vk;
    }
    mx=max(mx,(x*(x+1))/2);
    cout<<mx<<endl;
}
