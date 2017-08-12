#include<bits/stdc++.h>
using namespace std;
const int size=1000001;
int pa[size];
map<int,int>mp;
map<string,int>par;
int mx;
int ffind(int a)
{
    return (pa[a]==a)?a:pa[a]=ffind(pa[a]);
}
void unions(int a,int b)
{
    int p1=ffind(a);
    int p2=ffind(b);
    if(p1!=p2)
    {
        pa[p2]=p1;
        mp[p1]+=mp[p2];
    }
    mx=mp[p1];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        mx=-1;
        cin>>n;
        int count=0;
        for(int i=1;i<=n*2;i++)
            pa[i]=i;
        while(n--)
        {
            int x,y;
            string a,b;
            cin>>a>>b;
            if(par[a]==0) par[a]=++count;
            x=par[a];
            if(par[b]==0) par[b]=++count;
            y=par[b];
            if(mp[x]==0)mp[x]=1;
            if(mp[y]==0)mp[y]=1;
            unions(x,y);
            cout<<mx<<endl;
        }
        par.clear();
        mp.clear();
    }
}
