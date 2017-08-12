#include<cstdio>
typedef long long int ll;
ll f(ll n){
    if(n%2==0)return (n*(n-2)*(2*n-5))/24;
    else return ((n-1)*(n-3)*(2*n-1))/24;
}
int main(){
    ll n;
    while(scanf("%lld",&n) && n>=3){
        printf("%lld\n",f(n));
    }
}
