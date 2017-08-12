#include<bits/stdc++.h>
using namespace std;
const int n=30044;
int dif[n],visit[n];
vector<int>wieght[n];
vector<int>a[n];
int bfs(int s)
{
    memset(dif,-1,sizeof(dif));
    memset(visit,0,sizeof(visit));
    queue<int>q;
    q.push(s);
    visit[s]=1;
    dif[s]=0;
    int max=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<a[u].size();i++)
        {
            int v=a[u][i];
            if(!visit[v])
            {
                visit[v]=1;
                dif[v]=dif[u]+wieght[v];
                if(max<dif[v])
                    max=dif[v];
            }
        }
    }
    return max;

}
int main()
{
    int n,u,v,w;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        n--;
        while(n--)
        {
            cin>>u>>v>>w;
            a[u].push_back(v);
            a[v].push_back(u);
            wieght.push_back(w);
        }
        int m=bfs(0);
        printf("Case %d: %d\n",i,m);
    }

}
