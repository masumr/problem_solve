#include<bits/stdc++.h>
using namespace std;
const int size=1001;
vector<int>node[size];
int dis[size];
int vis[size];
int path[size];
void bfs(int s){
    memset(dis,-1,sizeof dis);
    memset(vis,0,sizeof vis);
    queue<int>q;
    q.push(s);
    dis[s]=0;
    vis[s]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<node[u].size();i++){
            int v=node[u][i];
            if(!vis[v]){
                vis[v]=1;
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }

    }
}
int main(){
    int n,e,u,v;
    cin>>n>>e;
    while(e--){
        cin>>u>>v;
        node[u].push_back(v);
        node[v].push_back(u);
    }
    int s;
    cin>>s;
    bfs(s);
    cin>>e;
    cout<<dis[e]<<endl;

}
