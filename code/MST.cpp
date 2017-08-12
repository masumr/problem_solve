#include<bits/stdc++.h>
using namespace std;
const int size=1000;
vector<int>a;
int par[size];
struct edge{
    int u,v,w;
}get;
bool operator<(edge a,edge b){
    return a.w<b.w;
}
int ffind(int a1)
{
    return (par[a1]==a1)?a1:ffind(par[a1]);
}
int mst(int n)
{
    sort(a.begin(),a.end());
    for(int i=1;i<=n;i++)
        par[i]=i;
    int count=0,s=0;
    int ans=0;
    for(int i=0;i<a.size();i++)
    {
        int pa=ffind(a[i].u);
        int pb=ffind(a[i].v);
        if(pa!=pb);
        {
            par[pb]=pa;
            ans+=a[i].w;
        }
    }
    cout<<"minimum weight :"<<ans<<endl;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edge get;
        get.u=u;get.v=v;get.w=w;
        a.push_back(get);
    }
    mst(n);
}
