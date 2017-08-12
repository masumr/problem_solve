#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,m;
    while(cin>>n>>m)
    {
        int a[n+12];
        for(int i=0;i<n;i++)
            cin>>a[i];
        ll low=0,ans=n+2,high=0,sum=0;
        while(high<=n)
        {
            if(sum>=m) ans=min(ans,high-low);
            if(sum>=m && low<high) sum-=a[low++];
            else sum+=a[high++];
        }
        if(ans==n+2) ans=0;
        else cout<<ans<<endl;
    }
}
