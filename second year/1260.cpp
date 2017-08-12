#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    scanf("%lld",&t);
    while(t--){
        ll n;
        scanf("%lld",&n);
        ll sum=0,a[n];
        for(ll i=0;i<n;i++){
            scanf("%lld",&a[i]);
            ll cnt=0;
            if(i!=0){
                for(ll j=0;j<i;j++){
                    if(a[j]<=a[i]) cnt++;
                }
            }
            sum+=cnt;
        }
        printf("%lld\n",sum);
    }
}
