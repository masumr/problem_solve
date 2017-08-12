#include<bits/stdc++.h>
using namespace std;
struct node{
    int u,w;
    bool operator<(const node& p)const{
        return p.w<w;
    }
};
int inf=1234567;
const int N=102;
vector<pair<int,int> >ed[N];
int p,r,bh,of,yh,m;
int dis[N],dis1[N];
void dij(){
    for(int i=0;i<=N;i++)dis[i]=inf;
    priority_queue<node>pq;
    dis[yh]=0;
    node nd;
    nd.u=yh;nd.w=0;
    pq.push(nd);
    while(!pq.empty()){
        nd=pq.top();pq.pop();
        int ucost=nd.w;
        for(int i=0;i<ed[nd.u].size();i++){
            int v=ed[nd.u][i].first;
            int vcost=ucost+ed[nd.u][i].second;
            if(vcost<dis[v]){
                dis[v]=vcost;
                node np;
                np.u=v;np.w=vcost;
                pq.push(np);
            }
        }
    }

}
void dij1(int x){
    priority_queue<node>pq;
    dis1[x]=0;
    node nd;
    nd.u=x;nd.w=0;
    pq.push(nd);
    while(!pq.empty()){
        nd=pq.top();pq.pop();
        int ucost=nd.w;
        for(int i=0;i<ed[nd.u].size();i++){
            int v=ed[nd.u][i].first;
            int vcost=ucost+ed[nd.u][i].second;
            if((vcost<dis1[v])){
                dis1[v]=vcost;
                node np;
                np.u=v;np.w=vcost;
                pq.push(np);
            }
        }
    }

}
int main(){
    while(scanf("%d%d%d%d%d%d",&p,&r,&bh,&of,&yh,&m)==6){
        for(int i=0;i<r;i++){
            int x,y,w;
            scanf("%d%d%d",&x,&y,&w);
            ed[x].push_back(make_pair(y,w));
            ed[y].push_back(make_pair(x,w));
        }
        dij();
        for(int i=0;i<=N;i++)dis1[i]=inf;
        dij1(bh);dij1(of);
        cout<<dis[m]<<' '<<dis1[m]<<endl;
        if(dis[m]>=dis1[m])printf("MISSION IMPOSSIBLE.\n");
        else printf("%d\n",dis[m]);
        for(int i=1;i<=p;i++)ed[i].clear();
    }
}
