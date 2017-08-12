#include<cstdio>
using namespace std;
typedef unsigned long long int ll;
int main(){
    ll n;
    while(scanf("%llu",&n) && n){
        ll ans=(n*10)/9;
        if(n%9)printf("%llu\n",ans);
        else printf("%llu %llu\n",ans-1,ans);
    }
}
