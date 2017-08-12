#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
const int N=150007;
vector<int>v[N];
int dis[N];
int vis[N];
void bfs(int s){
    queue<int>q;
    dis[s]=0;
    vis[s]=1;
    q.push(s);
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<v[u].size();i++){
            int n=v[u][i];
            if(!vis[n]){
                dis[n]=dis[u]+1;
                vis[n]=1;
                q.push(n);
            }
        }
    }
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++){
        int x,y;
        scanf("%d%d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    memset(vis,0,sizeof vis);
    memset(dis,-1,sizeof vis);
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            bfs(i);
            dis[i]=1;
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(dis[i]==1)cnt++;
    }
    if(cnt==n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    for(int i=1;i<=n;i++)v[i].clear();
}
