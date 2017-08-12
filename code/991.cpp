#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fact[22];
int main(){
    fact[1]=1;
    for(ll i=2;i<=20;i++){
        fact[i]=fact[i-1]*i;
    }
    int n;
    while(scanf("%d",&n)==1){
        ll ans=fact[2*n]/(fact[n]*fact[n]*(n+1));
        printf("%lld\n",ans);
    }
}
