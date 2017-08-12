#include<bits/stdc++.h>
using namespace std;
struct node{
    int c,w;
    bool operator<(const node& p)const{
        return w>p.w;
    }
};
const int N=109;
int inf=INT_MAX;
vector<int>city[N],cost[N];
vector<pair<int,int> >vv;
int dis[N];
int dd[N][N];
void dij(int s){
    priority_queue<node>pq;
    //memset(dis,-1,sizeof dis);
    for(int i=0;i<=N;i++)dis[i]=inf;
    dis[s]=0;
    node ss;
    ss.c=s;
    ss.w=0;
    pq.push(ss);
    while(!pq.empty()){
        node top=pq.top();pq.pop();
        int u=top.c;
        int ucost=top.w;
        for(int i=0;i<city[u].size();i++){
            int vcost=ucost+cost[u][i];
            int v=city[u][i];
            //cout<<u<<' '<<v<<' '<<cost[u][i]<<endl;
            if(vcost<dis[v]){
                dis[v]=vcost;
                //cout<<dis[v]<<' '<<v<<' '<<u<<endl;
                ss.w=vcost;
                ss.c=v;
                pq.push(ss);
            }
        }
    }
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n,e;
        scanf("%d%d",&n,&e);
        memset(dd,-1,sizeof dd);
        for(int i=0;i<e;i++){
            int u,v,w;
            scanf("%d%d%d",&u,&v,&w);
            if(dd[u][v]!=-1){
                dd[u][v]=min(dd[u][v],w);
                dd[v][u]=min(dd[v][u],w);
            }
            else{
                city[u].push_back(v);
                city[v].push_back(u);
                vv.push_back(make_pair(u,v));
                dd[u][v]=w;
                dd[v][u]=w;
            }
        }
        for(int i=0;i<vv.size();i++){
            int x=vv[i].first;
            int y=vv[i].second;
            cost[x].push_back(dd[x][y]);
            cost[y].push_back(dd[x][y]);
        }
        dij(1);
        printf("Case %d: ",++c);
        if(dis[n]==inf)printf("Impossible\n");
        else printf("%d\n",dis[n]);
        for(int i=0;i<=n+3;i++){
            city[i].clear();
            cost[i].clear();
        }
        vv.clear();
    }
}
