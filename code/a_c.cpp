#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    map<ll,ll>a;
    map<ll,ll>b;
    for(ll i=1;i<=n;i++)
        a[i%5]++;
    for(ll j=1;j<=m;j++)
        b[j%5]++;
    ll count=0;
    for(ll i=0;i<=4;i++)
    {
        for(ll j=0;j<=4;j++)
        {
            if(i+j==5 || i+j==0)
                count+=(a[i]*b[j]);
        }
    }
    //count+=(a[5]*b[5]);
    //int count=min(a[4],b[1])+min(a[3],b[2])+min(a[2],b[3])+min(a[1],b[4]);

    cout<<count<<endl;
}
