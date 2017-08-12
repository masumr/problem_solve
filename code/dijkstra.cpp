#include<bits/stdc++.h>
using namespace std;
struct data{
    int city,dist;
    data(int a,int b){
        city=a;
        dist=b;
    }
    bool operator<(const data & p)const{
        return dist<p.dist;
    }
};
#define For(i,a) for(int i=0;i<a;i++)
#define INF 100000
const int size=1000;
int i,j;
vector<int>a[size],cost[size];
int dis[size];
int vis[size];
int path[size];
void dijkstra(int s,int e){
    priority_queue<data>q;
    For(i,e+1) dis[i]=INF;
    dis[s]=0;
    q.push(data(s,0));
    while(!q.empty()){
        data top=q.top();q.pop();
        int u=top.city;
        For(i,a[u].size()){
            int v=a[u][i];
            if(dis[v]>dis[u]+cost[u][i]){
                dis[v]=dis[u]+cost[u][i];
                path[v]=u;
                q.push(data(v,dis[v]));
            }
        }
    }
}
void print(int e){
    if(e<=0) return;
    print(path[e]);
    cout<<e<<' ';
}
int main(){
    int n,m;
    cin>>n>>m;
    For(i,m){
        int x,y,z;
        cin>>x>>y>>z;
        a[y].push_back(x);
        a[x].push_back(y);
        cost[x].push_back(z);
        cost[y].push_back(z);
    }
    int x,y;
    cin>>x>>y;
    dijkstra(x,y);
    cout<<dis[y]<<endl;
    print(y);
}
