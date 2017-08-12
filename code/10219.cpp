#include<cstdio>
#include<math.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,x;
    while(scanf("%lld%lld",&n,&x)==2){
        ll a=1;
        double sum=0;
        ll mn=(x<n-x)?x:(n-x);
        for(int i=1;i<=mn;i++){
            sum+=log10(n);
            n--;
            sum-=log10(i);
        }
        ll s=sum;
        s++;
        printf("%lld\n",s);
    }
}
