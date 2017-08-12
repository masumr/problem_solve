#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll revrese(ll n)
{
    ll sum=0;
    while(n>0)
    {
        sum=(sum*10)+(n%10);
        n=n/10;
    }
    return sum;
}
int main()
{
    ll i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        ll m;
        cin>>m;
        ll x=revrese(m);
        ll count=0;
        while(m!=x)
        {
            m+=x;
            x=revrese(m);
            count++;
        }
        cout<<count<<" "<<x<<endl;
    }
}
