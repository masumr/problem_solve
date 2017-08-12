#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll pow(ll n,ll p)
{
    if(p==1)
        return n;
    ll t=pow(n,p>>1);
    t*=t;
    if(p&1)
        t*=n;
    return t;
}
ll euler_function(ll a)
{
    ll i=3;
    ll ans=1;
    ll count=0;
    while(a%2==0)
    {
        count++;
        a=a>>1;
    }
    if(count!=0)
        ans*=(pow(2,count-1))*(2-1);
    while(a>1)
    {
        ll count1=0;
        while(a%i==0)
        {
            count1++;
            a/=i;
        }
        if(count1!=0){
            ans*=((pow(i,count1-1))*(i-1));
        }
        i+=2;
    }
    return ans;
}
int main()
{
    ll n;
    cin>>n;
    cout<<euler_function(n)<<endl;
}
