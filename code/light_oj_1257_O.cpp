#include<bits/stdc++.h>
using namespace std;
struct node{
    int u,w;
    bool operator<(const node& p)const{
        return p.w<w;
    }
};
const int N=30009;
int inf=INT_MAX;
vector<int>city[N],cost[N];
int vis[N];
int dis[N],dis1[N];
int path[N];
int a[N];
void dij(int s){
    memset(vis,0,sizeof vis);
    for(int i=0;i<N-3;i++)dis[i]=inf;
    priority_queue<node>pq;
    memset(path,0,sizeof path);
    path[s]=1;
    vis[s]=1;
    dis[s]=0;
    node nd;
    nd.u=s;nd.w=0;
    pq.push(nd);
    while(!pq.empty()){
        node top=pq.top();pq.pop();
        int u=top.u;
        for(int i=0;i<city[u].size();i++){
            int v=city[u][i];
            int vcost=cost[u][i]+dis[u];
            if(vcost<dis[v]){
                dis[v]=vcost;
                vis[v]=1;
                path[v]=path[u]+1;
                nd.u=v;nd.w=vcost;
                pq.push(nd);
            }
        }
    }

}
void dij1(int s){
    //cout<<s<<endl;
    memset(vis,0,sizeof vis);
    for(int i=0;i<N-3;i++)dis1[i]=inf;
    priority_queue<node>pq;
    vis[s]=1;
    dis1[s]=0;
    node nd;
    nd.u=s;nd.w=0;
    pq.push(nd);
    while(!pq.empty()){
        node top=pq.top();pq.pop();
        int u=top.u;
        //cout<<city[u].size()<<endl;
        for(int i=0;i<city[u].size();i++){
            int v=city[u][i];
            //cout<<v<<' ';
            int vcost=cost[u][i]+dis1[u];
            if(vcost<dis1[v]){
                dis1[v]=vcost;
                vis[v]=1;
                nd.u=v;nd.w=vcost;
                pq.push(nd);
            }
        }
    }

}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n-1;i++){
            int x,y,z;
            scanf("%d%d%d",&x,&y,&z);
            city[x].push_back(y);
            city[y].push_back(x);
            cost[x].push_back(z);
            cost[y].push_back(z);
        }
        dij(0);
        printf("Case %d:\n",++c);
        int mx=0,cnt;
        for(int i=0;i<n;i++){
            a[i]=dis[i];
            if(mx<dis[i]){
                mx=dis[i];
                cnt=i;
            }
        }
        a[0]=mx;
        mx=0;
        dij1(cnt);
        cnt=0;
        for(int i=0;i<n;i++){
            a[i]=max(a[i],dis1[i]);
            if(mx<dis1[i]){
                mx=dis1[i];
                cnt=i;
            }
        }
        if(a[cnt]<mx)a[cnt]=mx;
        dij(cnt);
        mx=0;
         for(int i=0;i<n;i++){
            a[i]=max(a[i],dis[i]);
            if(mx<dis[i]){
                mx=dis[i];
            }
        }
        if(a[cnt]<mx)a[cnt]=mx;
        for(int i=0;i<n;i++)printf("%d\n",a[i]);
        for(int i=0;i<=n;i++){
            city[i].clear();
            cost[i].clear();
        }
    }
}
