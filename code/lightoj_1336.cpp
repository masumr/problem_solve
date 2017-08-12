#include<cstdio>
#include<iostream>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        ll sum=((ll)sqrt(n)+(ll)sqrt(n>>1));
        printf("Case %d: %lld\n",++c,n-sum);
    }
}
