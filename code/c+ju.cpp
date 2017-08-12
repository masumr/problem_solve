#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,a,b,p,q,ans;
    cin>>n>>a>>b>>p>>q;
    ll x1=n/a;
    ll x2=n/b;
    ll x=min(a,b);
    ll y=max(a,b);
    ll z=n+5;
    int count=0;
    for(int i=y;i<=n;i+=y)
    {
        if(i%x==0){
            count++;
            z=i;
            break;

        }
    }
    count=(n/z);
    if(p>q) ans=(x1*p)+((x2-count)*q);
    else ans=((x1-count)*p)+(x2*q);
    cout<<ans<<endl;
}
