#include<bits/stdc++.h>
using namespace std;
struct data{
    int c,d;
    data(int a,int b){
        c=a;
        d=b;
    }
    bool operator<(const data &p)const{
        return p.d<d;
    }
};
const int INF=1000000;
const int size=100000;
vector<int>a[size],cost[size];
int dis[size];
void dijstra(int s){
    for(int i=0;i<=size;i++) dis[i]=INF;
    priority_queue<data>q;
    q.push(data(s,0));
    dis[s]=0;
    while(!q.empty()){
        data top=q.top();q.pop();
        int u=top.c;
        for(int i=0;i<a[u].size();i++){
            int v=a[u][i];
            if(dis[u]+cost[u][i]<dis[v]){
                dis[v]=dis[u]+cost[u][i];
                q.push(data(v,dis[v]));
            }
        }
    }
}
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        int n,m,s,e;
        cin>>n>>m>>s>>e;
        for(int i=0;i<m;i++){
            int x,y,z;
            cin>>x>>y>>z;
            a[x].push_back(y);
            a[y].push_back(x);
            cost[x].push_back(z);
            cost[y].push_back(z);
        }
        dijstra(s);
        printf("Case #%d: ",++c);
        if(dis[e]==INF) cout<<"unreachable"<<endl;
        else cout<<dis[e]<<endl;
        for(int i=0;i<n;i++){
            a[i].clear();
            cost[i].clear();
        }
    }
}
