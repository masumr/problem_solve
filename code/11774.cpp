#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
int main(){
    ll a,b;
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld",&a,&b);
        printf("Case %d: %lld\n",++c,(a+b)/gcd(a,b));
    }
}
