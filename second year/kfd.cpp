#include<bits/stdc++.h>
using namespace std;
const int N=2001;
vector<int>v[N];
int dis[N];
int vis[N];
int a[N+5];
int bfs(int n){
    int mx=0;
    queue<int>q;
    memset(vis,0,sizeof vis);
    memset(dis,-1,sizeof dis);
    vis[n]=1;
    q.push(n);
    dis[n]=0;
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<v[u].size();i++){
            int vv=v[u][i];
            if(!vis[vv]){
                dis[vv]=1+dis[u];
                q.push(vv);
                vis[vv]=1;
                mx=max(mx,dis[vv]);
            }
        }
    }
    return mx;
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&a[i]);
        if(a[i]!=-1){
            v[a[i]].push_back(i);
        }
    }
    int cnt=0;
    int mx=0;
    for(int i=1;i<=t;i++){
        if(a[i]==-1){
            mx=max(mx,bfs(i));
        }
    }
    cout<<mx+1<<endl;

}
