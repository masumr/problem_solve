#include<bits/stdc++.h>
using namespace std;
const int n=10000;
vector<int>adj[n];
int d[n];
int v[n];
int bfs(int s,int dis)
{
    int n=LONG_LONG_MAX;
    for(int i=1;i<=n;i++) d[i]=n;
    memset(v,0,sizeof(v));
    queue<int>q;
    d[s]=0;
    v[s]=1;
    while(!q.empty())
    {
        int u=q.front(); q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i];
            if(d[v]>d[u]+a)
        }
    }
}
