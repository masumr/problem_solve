#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
ll sum(ll a,ll b,ll c,ll d){
    if(a==c) return abs(b-d)+1;
    if(b==d) return abs(a-c)+1;
    return gcd(abs(a-c),abs(b-d))+1;
}
int main(){
    ll a1,a2,b1,b2;
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%lld%lld%lld%lld",&a1,&b1,&a2,&b2);
        printf("Case %d: %lld\n",++c,sum(a1,b1,a2,b2));
    }
}
