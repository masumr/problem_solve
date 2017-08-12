#include<bits/stdc++.h>
using namespace std;
#define SZ(a) (int)a.size()
struct data{
    int city,dist;
    bool operator<(const data& p)const{
        return dist<p.dist;
    }
};
#define For(i,a) for(int i=0;i<a;i++)
const int size=10000;
vector<data>a;
int dis[size];
int path[size];
void dijstra(int s,int e){
    data tmp;
    tmp.city=s;
    tmp.dist=0;
    priority_queue<data>pq;
    pq.push(tmp);
    dis[s]=0;
    while(!pq.empty()){
        int u=pq.top().city;
        int d_u=pq.top().dist;
        pq.pop();
        for(int i=0;i<SZ(a[u]);i++){
            int v=a[u][i].city;
            int d_v=a[u][i].dist;
            if(d_u+d_v<dis[v]){
                dis[v]=d_u+d_v;
                tmp.city=v;
                tmp.dist=dis[v];
                path[v]=u;
                pq.push(tmp);
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
        data tmp;
        tmp.city=x;
        tmp.dist=z;
        a[y].push_back(tmp);
        tmp.city=y;
        a[x].push_back(tmp);
    }
    int s,e;
    cin>>s>>e;
    dijkstra(s,e);
    print(e);
}
