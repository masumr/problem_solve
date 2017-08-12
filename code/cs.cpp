#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<ll,ll>mp;
ll conv(ll n){
    ll a[20],cnt=0,ret=0;
    while(n){
        a[cnt++]=(n%10)%2;
        n/=10;
    }
    for(int i=cnt-1;i>=0;i--) ret=(ret*10)+a[i];
    return ret;
}
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        char c;
        ll x;
        scanf(" %c %lld",&c,&x);
        if(c!='?') x=conv(x);
        //cout<<x<<endl;
        if(c=='+') mp[x]++;
        else if(c=='-') mp[x]--;
        else printf("%lld\n",mp[x]);
    }
}
