#include<bits/stdc++.h>
using namespace std;
//#define pb push_back();
#define mm(a,b) memset(a,b,sizeof a)
vector<int>v[1001];
int dis[1001],vis[1001],path[1001];
void bfs(int s){
    mm(dis,-1);
    mm(vis,0);
    queue<int>q;
    q.push(s);
    dis[s]=0;
    vis[s]=1;
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<v[u].size();i++){
            int x=v[u][i];
            if(!vis[x]){
                path[x]=u;
                dis[x]=dis[u]+1;
                q.push(x);
                vis[x]=1;
            }
        }
    }
}
void print(int e){
    if(e<=0){
        return;
    }
    print(path[e]);
    cout<<e<<' ';
}
int main(){
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int s,ed;
    cin>>s>>ed;
    bfs(s);
    print(ed);
    cout<<endl;
}
