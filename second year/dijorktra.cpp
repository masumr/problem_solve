#include<bits/stdc++.h>
using namespace std;
struct data{
    int w,c;
    bool operator<(const data & p)const{
        return w>p.w;
    }
};
const int size=1000;
const int inf=10000000;
vector<int>city[size],cost[size];
int dis[size];
void dij(int s,int d){
    priority_queue<data>pq;
    for(int i=0;i<=size;i++)dis[i]=inf;
    dis[s]=0;
    data dd;
    dd.c=s;dd.w=0;
    pq.push(dd);
    while(!pq.empty()){
        data top=pq.top();pq.pop();
        int u=top.c;
        for(int i=0;i<city[u].size();i++){
            int v=city[u][i];
            //cout<<dis[u]<<' '<<cost[u][i]<<' '<<dis[v]<<endl;
            if(dis[u]+cost[u][i]<dis[v]){
                int vcost=dis[u]+cost[u][i];
                dis[v]=vcost;
                top.w=vcost;top.c=city[u][i];
                pq.push(top);
            }
        }
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int x,y,c;
        cin>>x>>y>>c;
        city[x].push_back(y);
        city[y].push_back(x);
        cost[x].push_back(c);
        cost[y].push_back(c);
    }
    int s;
    cin>>s;
    dij(s,0);
    int x,y;
    while(cin>>x){
        cout<<dis[x]<<endl;
    }
}
