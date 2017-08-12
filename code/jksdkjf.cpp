#include<bits/stdc++.h>
using namespace std;
const int N=800019;
vector<int>ed[N];
int vis[N];
int dis[N];
int cost[N];
void bfs(int s){
    memset(vis,0,sizeof vis);
    memset(dis,-1,sizeof dis);
    queue<int>q;
    q.push(s);
    dis[s]=0;
    vis[s]=1;
    q.push(s);
    while(!q.empty()){
        int u=q.front();q.pop();
        //cout<<u<<' ';
        for(int i=0;i<ed[u].size();i++){
            int v=ed[u][i];
            if(!vis[v]){
                vis[v]=1;
                q.push(v);
                dis[v]=dis[u]+1;
            }
        }
    }
    //cout<<endl;
}
int main(){
    //int kkk=1000000000;
    //cout<<kkk+1<<endl;
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n,e;
        cin>>n>>e;
        for(int i=0;i<e;i++)scanf("%d",&cost[i]);
        for(int i=0;i<n;i++){
            int x,y;
            scanf("%d%d",&x,&y);
            ed[x].push_back(y);
            ed[y].push_back(x);
        }
        int s,ee;
        scanf("%d%d",&s,&ee);
        bfs(s);
        //for(int i=0;i<=e;i++)cout<<dis[i]<<' ';
        //cout<<endl;
        //cout<<dis[ee]<<endl;
        printf("Case %d: ",++c);
        if(!vis[ee] && n==0)printf("Path not found\n");
        else{
            int len=dis[ee];
            int co=cost[ee-1];
            //cout<<co<<' '<<len<<endl;
            if(len>co)printf("Don't travel\n");
            else printf("%d\n",co-len);
        }
        printf("\n");
    }
}
