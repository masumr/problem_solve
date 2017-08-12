#include<bits/stdc++.h>
using namespace std;
const int N=11;
struct node{
    int u,w;
    bool operator<(const node& p)const{
        return w>p.w;
    }
};
vector<int>ed[N],cost[N];
int dis[N],path[N];
int inf=1234567;
void dij(int s){
    priority_queue<node>pq;
    node nd;
    nd.u=s;nd.w=0;
    pq.push(nd);
    dis[s]=0;
    path[s]=0;
    while(!pq.empty()){
        nd=pq.top();pq.pop();
        int u=nd.u;
        int ucost=nd.w;
        for(int i=0;i<ed[u].size();i++){
            int v=ed[u][i];
            int vcost=cost[u][i]+ucost;
            if(vcost<dis[v]){
                dis[v]=vcost;
                node np;np.u=v,np.w=vcost;
                path[v]=u;
                pq.push(np);
            }
        }
    }
}
vector<int>vv;
void pat(int s){
    //cout<<s<<' ';
    if(path[s]==0){
        vv.push_back(s);
        return;
    }
    pat(path[s]);
    vv.push_back(s);
}
int main(){
    int c=0,n;
    while(scanf("%d",&n) && n){
        for(int i=1;i<=n;i++){
            int t;
            scanf("%d",&t);
            while(t--){
                int x,y;
                scanf("%d%d",&x,&y);
                ed[i].push_back(x);
                cost[i].push_back(y);
            }
        }
        int s,e;
        scanf("%d%d",&s,&e);
        for(int i=1;i<=n;i++)dis[i]=inf;
        dij(s);
        pat(e);
        printf("Case %d: Path = ",++c);
        for(int i=0;i<vv.size();i++){
            printf("%d",vv[i]);
            if(i!=vv.size()-1)printf(" ");
            else printf(";");
        }
        vv.clear();
        printf(" %d second delay\n",dis[e]);
        for(int i=1;i<=n;i++){
            ed[i].clear();
            cost[i].clear();
        }
    }
}
