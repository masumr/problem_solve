#include<bits/stdc++.h>
using namespace std;
const int nn=1003;
vector<int>city[nn],v;
int dis[nn],vis[nn];
int cheack[nn];
void bfs(int n){
    memset(vis,0,sizeof vis);
    //memset(dis,-1,sizeof dis);
    queue<int>q;
    vis[n]=1;
   // dis[n]=0;
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<city[u].size();i++){
            int v=city[u][i];
            if(!vis[v]){
                cheack[v]++;
                q.push(v);
                vis[v]=1;
            }
        }
    }
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        memset(cheack,0,sizeof cheack);
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        for(int i=0;i<x;i++){
            int a;
            scanf("%d",&a);
            v.push_back(a);
        }
        for(int i=0;i<y;i++){
            int u,v;
            scanf("%d%d",&u,&v);
            city[u].push_back(v);
            city[v].push_back(u);
        }
        for(int i=0;i<x;i++){
            bfs(v[i]);
        }
        int count=0;
        for(int i=0;i<=z;i++){
            if(cheack[i]==x){
                count++;
            }
            city[i].clear();
        }
        printf("Case %d: %d\n",++c,count);
    }
}
