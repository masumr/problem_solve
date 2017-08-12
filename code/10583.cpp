#include<bits/stdc++.h>
using namespace std;
const int size=50001;
int par[size];
map<int,int>mp;
int ffind(int a)
{
    return (par[a]==a)?a:ffind(par[a]);
}
void unions(int a,int b)
{
    int p1=ffind(a);
    int p2=ffind(b);
    if(p1!=p2)
    {
        par[p1]=p2;
        mp[p1]=0;
    }
}
int main()
{
    int n,m,c=0;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            return 0;
        for(int i=1;i<=n;i++)
        {
            mp[i]=1;
            par[i]=i;
        }
        while(m--)
        {
            int x,y;
            cin>>x>>y;
            unions(x,y);
        }
        int ans=0;
        for(int i=1;i<=n;i++)
            ans+=mp[i];
        printf("Case %d: %d\n",++c,ans);
    }

}
