#include<cstdio>
using namespace std;
typedef long long int ll;
ll fac[14];
int main(){
    fac[0]=1;
    for(int i=1;i<=13;i++)fac[i]=fac[i-1]*i;
    int n,k;
    while(scanf("%lld%lld",&n,&k)==2){
        ll p=1;
        for(int i=1;i<=k;i++){
            ll x;
            scanf("%lld",&x);
            p*=fac[x];
        }
        printf("%lld\n",fac[n]/p);
    }
}
