#include<bits/stdc++.h>
using namespace std;
int main()
{
    int visited[100];
    int distance[100];
    int path[100];
    vector<int>adjlist[100];
    int n,a,b;
    int s,e;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);
    }
    cin>>s>>e;
    memset(visited,0,sizeof(visited));
    memset(distance,-1,sizeof(distance));
    distance[s]=0;
    visited[s]=1;
    int k=0;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<adjlist[u].size();i++)
        {
            int v=adjlist[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                distance[v]=distance[u]+1;
                q.push(v);
            }
        }
    }
    cout<<distance[e]+1<<endl;
    for(int j=0;j<=distance[e];j++)
        cout<<path[j]<<' ';
}
