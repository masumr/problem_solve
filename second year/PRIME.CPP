#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,m,c=0;
    while(scanf("%lld%lld",&n,&m)&&(n&&m)){
        int cnt=0;
        if(n==1)cnt++;
        if(m==1)cnt++;
        if(cnt==1)printf("Case %d: Odd.\n",++c);
        else printf("Case %d: Even.\n",++c);
    }
}
