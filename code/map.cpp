#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<int,int>a;
map<int,int>b;
map<pair<int,int>,int>mp;
int main()
{
    int t,x,y;
    cin>>t;
    ll sum=0;
    while(t--)
    {
        cin>>x>>y;
        sum+=a[x]+b[y]-mp[make_pair(x,y)];
        a[x]++;
        b[y]++;
        mp[make_pair(x,y)]++;
        cout<<mp[t]<<' ';
    }
    cout<<sum<<endl;
}
