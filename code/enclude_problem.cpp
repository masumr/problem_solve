#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b,ll &x,ll &y)
{
    ll x1,y1;
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    ll g=gcd(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return g;
}
int main()
{
    ll a,b,x,y;
    while(cin>>a>>b){
        ll t=gcd(a,b,x,y);
         if (a == b) {
              x = 0;
              y = 1;
            }
        cout<<x<<' '<<y<<' '<<t<<endl;
    }
}
