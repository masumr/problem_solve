#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b){
    while(b)b^=a^=b^=a%=b;
    return a;
}
ll lcm(ll a,ll b){return (a/gcd(a,b));}
int main(){
    ll x,y;
    cin>>x>>y;
    cout<<gcd(x,y)<<endl;
}
