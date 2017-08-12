#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int size=10000001;
ll num=1000000007;
bitset<size>a;
vector<ll>b;
ll power(int n,int p)
{
    if(p==0) return 1;
    if(p==1) return n;
    ll t=pow(n,p>>1);
    t=((t%num)*(t%num))%num;
    if(p&1)
        t=((t%num)*(n%num))%num;
    return t;
}
void sieve()
{
    b.push_back(2);
    for(ll i=3;i<=size;i+=2)
    {
        if(a[i]==0){
            for(ll j=i*i;j<=size;j+=i)
                a[j]=1;
        }
    }
}
int main()
{
    ll x,y;
    int t,c=0;
    sieve();
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        ll ans=1;
        for(int i=0;b[i]<=x;i++)
        {
            int count=0;
            while(x%b[i]==0)
            {
                x/=b[i];
                count++;
            }
            if(count!=0){
                ans=((ans*(power(b[i],count*y+1)-1+num))/(b[i]-1));
                ans%=num;
            }
        }
        if(x>1){
            ans=((power(x,y+1)-1+num)/(x-1));
            ans%=num;
        }
        printf("Case %d: %lld\n",++c,ans);
    }
}
