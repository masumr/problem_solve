#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
vector<pii>g[30002];
int visit[30002],dis[30002];
int pos;
int bfs(int start)
{
        memset(visit,0,sizeof(visit));
        memset(dis,0,sizeof(dis));
    visit[start]=1;
    queue<int>q;
    q.push(start);
    dis[start]=0;
    int maxx=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<g[u].size();i++)
        {
            int v=g[u][i].first;
            int cost=g[u][i].second;
            if(visit[v]==0)
            {
                q.push(v);
                dis[v]=dis[u] + cost;
                if(dis[v]>maxx)
                {
                    maxx=dis[v];
                    pos=v;
                }
                visit[v]=1;
            }
        }
    }
    return maxx;
}


int main()
{
    int t,n,u,v,w,cases=0;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<=30002;i++){g[i].clear();}
        cin>>n;
        for(int i=0;i<n-1;i++)
        {
            cin>>u>>v>>w;
            g[u].push_back(pii(v,w));
            g[v].push_back(pii(u,w));
        }
        long long s=bfs(0);
        long long s1=bfs(pos);
        printf("Case %d: %lld\n",++cases,s1);
    }
}
