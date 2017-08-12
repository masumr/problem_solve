#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,m;
    while(scanf("%lld%lld",&n,&m)==2){
        ll mod=pow(2,m);
        ll i,j,h,k,t;
        i=h=1;
        j=k=0;
        while(n){
            if(n&1){
                t=((j%mod)*(h%mod))%mod;
                j=(((i%mod)*(h%mod))%mod+((j%mod)*(k%mod))%mod+t)%mod;
                i=(((i%mod)*(k%mod))%mod+t)%mod;
            }
            t=((h%mod)*(h%mod))%mod;
            h=((2*(k%mod)*(h%mod))%mod+t)%mod;
            k=(((k%mod)*(k%mod))+t)%mod;
            n/=2;
        }
        printf("%lld\n",j);
    }
}
