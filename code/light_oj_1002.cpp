#include<bits/stdc++.h>
using namespace std;
struct node{
    int ci,co;
    bool operator<(const node &p)const{
        return co>p.co;
    }
};
const int inf=INT_MAX;
int cost[501][501];
int dis[501];
int path[501];
int n;
void dijsktra(int s,int co){
    priority_queue<node>pq;
    dis[s]=0;
    node nd;
    nd.ci=s;nd.co=co;
    pq.push(nd);
    while(!pq.empty()){
        node top=pq.top();pq.pop();
        int u=top.ci;
        //cout<<top.co<<' '<<dis[u]<<endl;
        if(top.co!=dis[u])continue;
        ///cout<<u<<' ';
        for(int i=0;i<n;i++){
            //cout<<d<<' ';
            //cout<<i<<' ';
            if(i!=u && dis[i]>max(dis[u],cost[u][i])){
                //cout<<dis[u]<<' ';
                dis[i]=max(dis[u],cost[u][i]);
                //cout<<dis[i]<<' '<<1<<endl;;
                nd.ci=i;nd.co=dis[i];
                pq.push(nd);
            }
        }
    }
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int e;
        //memset(path,-1,sizeof path);
        scanf("%d%d",&n,&e);
        //for(int i=0;i<n;i++)dis[i]=inf;
        for(int i=0;i<n;i++){
            dis[i]=inf;
            for(int j=0;j<n;j++){
                if(i!=j)cost[i][j]=inf;
                else cost[i][j]=0;
            }
        }
        for(int i=0;i<e;i++){
            int x,y,z;
            scanf("%d%d%d",&x,&y,&z);
            if(z<cost[x][y])cost[x][y]=cost[y][x]=z;
        }
        int s;
        scanf("%d",&s);
        dijsktra(s,0);
        //for(int i=0;i<n;i++)cout<<dis[i]<<' ';
        //cout<<endl;
        //mx=0;
        printf("Case %d:\n",++c);
        for(int i=0;i<n;i++){
            if(dis[i]==inf)printf("Impossible\n");
            else{
               // mx=0;
                //find_(i);
                printf("%d\n",dis[i]);
            }
        }
    }
}
