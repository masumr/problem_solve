#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,m;
    int c;
    while(scanf("%lld%lld %d",&n,&m,&c)&&(n&&m)){
        if(c==0)printf("%lld\n",(n-7)*(m-7)/2);
        else printf("%lld\n",((n-7)*(m-7)+1)/2);
    }
}
