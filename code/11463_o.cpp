#include<bits/stdc++.h>
using namespace std;
const int N=101;
int dis[N],dis1[N];
vector<int>ed[N];
void bfs1(int s){
    queue<int>q;
    dis[s]=0;
    q.push(s);
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<ed[u].size();i++){
            int v=ed[u][i];
            if(dis[v]==-1){
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }
    }
}
void bfs2(int s){
    queue<int>q;
    dis1[s]=0;
    q.push(s);
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<ed[u].size();i++){
            int v=ed[u][i];
            if(dis1[v]==-1){
                dis1[v]=dis1[u]+1;
                q.push(v);
            }
        }
    }
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++){
            dis[i]=-1;
            dis1[i]=-1;
        }
        while(m--){
            int u,v;
            scanf("%d%d",&u,&v);
            ed[u].push_back(v);
            ed[v].push_back(u);
        }
        int s,d;
        scanf("%d%d",&s,&d);
        bfs1(s);
        bfs2(d);
        int mx=0;
        for(int i=0;i<n;i++){
            ed[i].clear();
            if(dis[i]!=-1 && dis1[i]!=-1){
                //cout<<dis[i]<<' '<<dis1[i]<<' '<<i<<endl;
                mx=max(mx,dis[i]+dis1[i]);
            }
        }
        printf("Case %d: %d\n",++c,mx);
    }
}

