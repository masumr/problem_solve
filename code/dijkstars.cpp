#include<bits/stdc++.h>
using namespace std;
#define MAX=100001;
#define INF (1<<20)
#define pii pair<int,int>
#define pb(x) push_back(x)
struct comp{
    bool operator()(const pii &a,const pii &b){
        return a.second>b.second;
    }
};
priority_queue<pii,vector<pii>,comp>q;
vector<pii>g[MAX];
int d[MAX];
bool f[MAX];
int main(){
    int u,v,w,nodes,edges,start;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v>>w;
        g[u].pb(pii(v,w));
        g[v].pb(pii(u,w));
    }
    cin>>start;
    for(int i=0;i<nodes;i++) d[i]=INF;
    d[start]=0;
    q.push(pii(start,0));
    while(!q.empty()){
        u=q.top().frist;
        for(int i=0;i<g[u].size();i++){
            v=g[u][i].frist;
            w=g[u][i].second;
            if(!)
        }
    }
}
