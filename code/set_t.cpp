#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
set<ll>a;
set<ll>::iterator it;
int main()
{
    ll x;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x;
        a.insert(x);
    }
    for(it=a.begin();it!=a.end();it++)
        cout<<*it<<' ';
}
