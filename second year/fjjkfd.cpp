#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        ll a1,d1,k1,a2,d2,k2;
        scanf("%lld%lld%lld%lld%lld%lld",&a1,&d1,&k1,&a2,&d2,&k2);
        ll s1=(2*a1+(k1-1)*d1)*k1;
        ll s2=(2*a2+(k2-1)*d2)*k2;
        s1/=2;
        s2/=2;
        printf("Case %d: %lld\n",++c,s1+s2);
    }
}
