#include<bits/stdc++.h>
using namespace std;
const int size=30001;
int par[size];
map<int,int>mp;
int mx;
int ffind(int a)
{
    return (par[a]==a)?a:par[a]=ffind(par[a]);
}
void unions(int a,int b)
{
    int pa=ffind(a);
    int pb=ffind(b);
    if(pa!=pb)
    {
        par[pb]=pa;
        mp[pa]+=mp[pb];
    }
    mx=max(mx,mp[pa]);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        mp.clear();
        mx=-1;
        int x,y;
        cin>>x>>y;
        for(int j=1;j<=x;j++)
            par[j]=j;
        while(y--)
        {
            int a,b;
            cin>>a>>b;
            if(mp[a]==0) mp[a]=1;
            if(mp[b]==0) mp[b]=1;
            unions(a,b);
        }
        cout<<mx<<endl;
    }
}
