#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll sum=0;
ll bigsum(ll number,ll power,ll mod)
{
    if(power==0)
        return 1;
    ll ret=bigsum(number,power>>1,mod);
    ret=(ret*ret)%mod;
    ret=((ret*(power+1))%mod+(ret(power+2))%mod;
    if(power&1){
        ret=(number*ret)%mod;
        //sum+=(ret*(power+1))%mod;
    }
    return ret;
}
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll num=bigsum(a,b,c);
    cout<<sum<<endl;
}
