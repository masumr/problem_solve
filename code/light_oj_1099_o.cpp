#include<bits/stdc++.h>
using namespace std;
struct node{
    int c,w;
    bool operator<(const node& p)const{
        return w>p.w;
    }
};
const int N=5009;
vector<int>city[N],cost[N];
int dis[N],dis1[N];
int dd[N][N];
int path[N];
int inf=INT_MAX;
void dij(int s){
    priority_queue<node>pq;
    for(int i=1;i<=N;i++){
        dis[i]=inf;
        dis1[i]=inf;
    }
    memset(path,0,sizeof path);
    node nn;
    nn.c=s;nn.w=0;
    path[s]=0;
    pq.push(nn);
    dis[s]=0;
    while(!pq.empty()){
        node top=pq.top();pq.pop();
        int u=top.c;
        int ucost=top.w;
        for(int i=0;i<city[u].size();i++){
            int v=city[u][i];
            int vcost=dis[u]+cost[u][i];
            if(dis[v]>vcost){
                dis1[v]=dis[v];
                dis[v]=vcost;
                path[v]=u;
                nn.c=v;nn.w=vcost;
                pq.push(nn);
            }
        }
    }
}
vector<int>pp;
vector<pair<int,int> >vv;
void pat(int e){
    if(path[e]==0){
        pp.push_back(e);
        return;
    }
    pat(path[e]);
    //cout<<e<<' ';
    pp.push_back(e);
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
        vv.clear();
        dij(1);
        cout<<dis[n]<<endl;
        pat(n);
        int mx=inf;
        for(int i=0;i<pp.size()-1;i++){
            //cout<<pp[i]<<' ';
            mx=min(mx,dd[pp[i]][pp[i+1]]);
        }
        cout<<mx<<" "<<dis1[n]<<endl;
        int ds=2*mx+dis[n];
        int mn=min(ds,dis1[n]);
        printf("Case %d: %d\n",++c,mn);
        for(int i=1;i<=n;i++){
            city[i].clear();
            cost[i].clear();
        }
        pp.clear();
    }
}
