#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void crt(ll a, ll b, ll &x, ll &y){
    if(b == 0){
        x = 1;
        y = 0;
        return;
    }
    ll x1,y1,gcd= crt(b,a%b,x1,y1);
    x=y1;
    y=x1-(a / b)*y1;
    return;
}
int main()
{
    int t,e=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll sum=0,s1=1;
        vector<ll>v,a;
        int count=0;
        for(int i=0;i<n;i++){
            ll x,y;
            cin>>x>>y;
            if(y==0) count++;
            v.push_back(x);
            a.push_back(y);
            s1*=x;
        }
        for(int i=0;i<n;i++){
            ll c=s1/v[i];
            ll x=0,y=0,s2=crt(c,v[i],x,y);
            sum=(sum+(c*x*a[i]))%s1;
        }
        printf("Case %d: %lld\n",++e,(s1+sum%s1)%s1);
        a.clear();
        v.clear();
    }
}
