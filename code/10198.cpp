#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll ncr(int n,int r)
{
    ll ans=1;
    int n1=max(r,n-r);
    int n2=1;
    for(int i=n;i>n1;i--)
    {
        ans*=i;
        ans/=n2;
        n2++;
    }
    return ans;
}
int main()
{
    int a;
    while(cin>>a)
    {
        ll ans=0;
        for(int i=1;i<a;i++)
        {
            ans+=(2*ncr(a,i));
        }
        ans++;
        cout<<ans<<endl;
    }
}
