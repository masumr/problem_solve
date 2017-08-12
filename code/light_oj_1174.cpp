#include<bits/stdc++.h>
using namespace std;
const int size=200;
vector<int>a[size];
int dis[size];
int vis[size];
int x;
int bfs(int s,int d)
{
    memset(dis,-1,sizeof(dis));
    memset(vis,0,sizeof(dis));
    priority_queue<int>q;
    dis[s]=0;
    vis[s]=1;
    q.push(s);
    while(!q.empty())
    {
        int u=q.top();
        q.pop();
        for(int i=0;i<a[u].size();i++)
        {
            int v=a[u][i];
            if(!vis[v])
            {
                dis[v]=dis[u]+1;
                vis[v]=1;
                q.push(v);
            }
        }
    }
    return dis[d];
}
int main(){
    int t,c=0;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        while(m--)
        {
            int y,b;
            cin>>y>>b;
            a[y].push_back(b);
            a[b].push_back(y);
        }
        int s,d;
        int mx=0;
        cin>>s>>d;
        for(int i=0;i<n;i++)
        {
            int sum=bfs(s,i)+bfs(i,d);
            mx=max(mx,sum);
        }
        printf("Case %d: %d\n",++c,mx);
        for(int i=0;i<n;i++)
            a[i].clear();
    }
}
