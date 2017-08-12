#include<bits/stdc++.h>
using namespace std;
struct data{
    int city,dist;
    data (int a,int b){
        city=a;
        dist=b;
    }
    bool operator<(const data& p)const{
        return dist>p.dist;
    }
};
const int INF=10000000;
vector<int>cit[2000],d[2000];
int dis[2000];
int path[2000];
int dijsktra(int s,int e){
    for(int i=0;i<2001;i++) dis[i]=INF;
    dis[s]=0;
    priority_queue<data>pq;
    pq.push(data(s,0));
    while(!pq.empty()){
        data top=pq.top();pq.pop();
        int u=top.city;
        for(int i=0;i<cit[u].size();i++){
            int v=cit[u][i];
            if(dis[v]>dis[u]+d[u][i])
            {
                dis[v]=dis[u]+d[u][i];
                path[v]=u;
                pq.push(data(v,dis[v]));
            }
        }
    }
    return dis[e];
}
int main(){
        int t,c=0;
        cin>>t;
        cout<<endl;
        while(t--){
            int n,m;
            cin>>n>>m;
            for(int i=0;i<m;i++){
                int x,y,z;
                cin>>x>>y>>z;
                cit[x].push_back(y);
                cit[y].push_back(x);
                d[x].push_back(z);
                d[y].push_back(z);
            }
            int s;
            cin>>s;
            printf("Case %d:\n",++c);
            for(int i=0;i<n;i++){
                int a=dijsktra(i,s);
                int mx=-1;
                while(s){
                    if(s<=0) break;
                    mx=max(mx,d[i][s]);
                    s=path[s];
                }
                if(mx=-1) cout<<"Impossible"<<endl;
                else cout<<a<<endl;
            }
            for(int i=0;i<=n;i++)
            {
                cit[i].clear();
                d[i].clear();
            }
            if(t!=0) cout<<endl;
        }
}
