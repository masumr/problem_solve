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
int dis[N];
int dd[N][N];
int path[N];
int inf=INT_MAX;
void dij(int s){
    priority_queue<node>pq;
    for(int i=1;i<=N;i++)dis[i]=inf;
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
                dis[v]=vcost;
                path[v]=u;
                nn.c=v;nn.w=vcost;
                pq.push(nn);
            }
        }
    }
}
vector<pair<int,int> >p;
bool com(pair<int,int>a,pair<int,int> b){
    return a.second<b.second;
}
vector<int>pp;
void pat(int e){
    while(path[e]==0){
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
        for(int i=0;i<e;i++){
            int u,v,w;
            scanf("%d%d%d",&u,&v,&w);
            city[u].push_back(v);
            city[v].push_back(u);
            cost[v].push_back(w);
            cost[u].push_back(w);
            dd[u][v]=w;
            dd[v][u]=w;
        }
        dij(1);
        for(int i=0;i<city[n].size();i++){
            int u=city[n][i];
            if(dis[u]!=inf){
                p.push_back(make_pair(u,dis[u]+dd[n][u]));
            }
        }
        sort(p.begin(),p.end(),com);
        pat(p[0].first);
        vector<int>cp;
        for(int i=0;i<pp.size()-1;i++){
            //cout<<pp[i]<<' ';
            cp.push_back(dd[pp[i]][pp[i+1]]);
        }
        cp.push_back(dd[n][p[0].first]);
        sort(cp.begin(),cp.end());
        //cout<<pp.size()<<endl;
        printf("Case %d: ",++c);
        //cout<<pp.size()<<endl;
        //for(int i=0;i<pp.size();i++)cout<<pp[i]<<' ';cout<<endl;
        int sk=2*cp[0]+p[0].second;
        int mx;
        if(p.size()==1)mx=sk;
        else{
            mx=min(sk,p[1].second);
        }
        //cout<<p[0].second<<' '<<sk<<' '<<p[1].second<<endl;
        printf("%d\n",mx);
        //else printf("%d\n",p[1].second);
        pp.clear();p.clear();cp.clear();
        for(int i=1;i<=n;i++){
            city[i].clear();
            cost[i].clear();
        }
    }
}

