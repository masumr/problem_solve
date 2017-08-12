#include<bits/stdc++.h>
using namespace std;
const int N=109;
vector<int>ed[N];
int vis[N];
int bfs(int s){
    queue<int>q;
    memset(vis,0,sizeof vis);
    vis[s]=1;
    q.push(s);
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<ed[u].size();i++){
            int v=ed[u][i];
            //cout<<v<<' ';
            if(v==s)return 1;
            if(!vis[v]){
                vis[v]=1;
                q.push(v);
            }
        }
    }
    //cout<<endl;
    return 0;
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=1;i<=m;i++){
            int x,y;
            scanf("%d%d",&x,&y);
            ed[x].push_back(y);
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
            cnt+=bfs(i);
            //cout<<bfs(i)<<' '<<i<<endl;
        }
        printf("Case %d: %d\n",++c,n-cnt);
        for(int i=0;i<=n+1;i++)ed[i].clear();
    }
}

