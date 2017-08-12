#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll x,y;
    cin>>x>>y;
    char a;
    ll count=0,d,sum=0;
    for(ll i=1;i<=x;i++)
    {
        cin>>a;
        cin>>d;
        if(a=='-')
            d=-1*d;
        else
            d=d;
        if(y+d>0)
            y+=d;
        else
            count++;
    }
    cout<<y<<" "<<count<<endl;
}
