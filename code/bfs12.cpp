#include<bits/stdc++.h>
using namespace std;
const int size=1000;
vector<int >a[size];
vector<int>::iterator it;
int dis[size];
int vis[size];
int path[size];
void bfs(int s,int e){
    memset(vis,0,sizeof(vis));
    memset(dis,-1,sizeof(dis));
    queue<int>q;
    q.push(s);
    dis[s]=0;
    vis[s]=1;
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<a[u].size();i++)
        {
            int v=a[u][i];
            if(!vis[v]){
                dis[v]=dis[u]+1;
                vis[v]=1;
                path[v]=u;
                q.push(v);
            }

        }

    }
}
void print(int e){
    if(e<=0) return;
    print(path[e]);
    cout<<e<<' ';
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    int s,e;
    cin>>s>>e;
    bfs(s,e);
    cout<<dis[e]<<endl;
    print(e);
}
