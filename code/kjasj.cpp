#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod=1000000007;
ll mmul(ll a,ll b) {
    a %= mod;
    ll result = 0;
    while (b) {
        if (b % 2) result = (result + a) % mod;
        a = (a + a) % mod;
        b /= 2;
    }
    return result;
}
ll bigmod(ll a,ll b) {
    a %= mod;
    ll result = 1;
    while (b) {
        if (b % 2) result = mmul(result, a);
        a = mmul(a, a);
        b /= 2;
    }
    return result;
}
int main(){
    int t,c=0;
    //cout<<bigmod(111234567890,123411156789)<<endl;
    scanf("%d",&t);
    while(t--){
        ll n,b,ss;
        scanf("%lld%lld",&n,&b);
        ll n1=n/2;
        //cout<<(n1+1)*2<<endl;
        b%=mod;
        //cout<<b*b<<endl;
        ll sum=(bigmod(b,(n1+1)*2)-1)%mod;
        ll kk=bigmod(mmul(b,b)-1,mod-2)%mod;
        sum=mmul(sum,kk);
        ss=sum;
        cout<<sum+mod<<' '<<n1%mod<<endl;
        sum=((sum+mod)-(n1+1))%mod;
        cout<<sum+mod<<endl;
        sum/=(b-1);
        if(n&1)sum=((ss%mod)+(sum%mod))%mod;
        printf("Case %d: %lld\n",++c,sum%mod);
    }
}

