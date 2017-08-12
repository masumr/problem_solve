#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        ll n;
        scanf("%lld",&n);
        ll s=(sqrt(1+8*n)-1)/2;
        ll a=s;
        ll b=(a*(a+1))/2;
        if(a+b>n){
            b-=a;
            a--;
        }
        ll c=n-(a+b);
        printf("%lld %lld %lld\n",a,b,c);
    }
}
