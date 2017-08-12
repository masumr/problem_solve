#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return b/gcd(a,b)*a;}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        ll a,b;
        scanf("%lld%lld",&a,&b);
        ll mx=lcm(a*2,b*2);
        printf("%lld\n",mx);
    }
}
