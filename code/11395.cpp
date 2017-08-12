#include<cstdio>
#include<cmath>
typedef long long int ll;
int main(){
    ll n;
    while(scanf("%lld",&n) && n!=0){
        ll  sum=((ll)sqrt(n)+(ll)sqrt(n>>1));
        printf("%lld\n",n-sum);
    }
}
