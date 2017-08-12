#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        ll n;
        scanf("%lld",&n);
        ll count=0;
        ll k=1;
        if(n%2)k++;
        for(ll i=1;i*i<=n;i+=k){
            if(n%i==0){
                if(i%2 || (n/i)%2)
                    if(gcd(i,n/i)==1)count++;
            }
        }
        printf("%lld\n",count);

    }
}
