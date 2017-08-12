#include<bits/stdc++.h>
using namespace std;
const int N=13;
vector<int>ed[N],edd[N];
int vis1[N],vis2[N];
int dis[N];
int path[N];
void bfs(int s){
    memset(dis,-1,sizeof  dis);
    memset(vis1,0,sizeof vis1);
    memset(vis2,0,sizeof vis2);
    vis2[s]=1;
    vis1[s]=1;
    dis[s]=0;
    queue<int>q;
    path[s]=0;
    for(int i=0;i<edd[s].size();i++){
        int v=edd[s][i];
        if(!vis2[v])vis2[v]=1;
        else vis2[v]=0;
    }
    if(vis2[s])q.push(s);
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<ed[u].size();i++){
            int v=ed[u][i];
            for(int i=0;i<edd[v].size();i++){
                int kk=edd[v][i];
                if(!vis2[kk])vis2[kk]=1;
                else vis2[kk]=0;
            }
            if(!vis1[v] && vis2[v]){
                path[v]=u;
                dis[v]=dis[u]+1;
                vis1[v]=1;
            }
        }
    }
}
vector<int>vc;
void pat(int s){
    cout<<s<<' '<<path[s]<<endl;
    if(path[s]==0){
        vc.push_back(s);
        return;
    }
    pat(path[s]);
    vc.push_back(s);
}
int main(){
    int r,d,s,c=0;
    while(scanf("%d%d%d",&r,&d,&s) &&(r&&d&&s)){
        for(int i=0;i<d;i++){
            int u,v;
            scanf("%d%d",&u,&v);
            ed[u].push_back(v);
            ed[v].push_back(u);
        }
        for(int i=0;i<s;i++){
            int u,v;
            scanf("%d%d",&u,&v);
            edd[u].push_back(v);
        }
        printf("Villa #%d\n",++c);
        bfs(1);
        pat(r);
        for(int i=0;i>vc.size();i++)cout<<vc[i]<<' ';
        if(dis[r]==-1)printf("The problem cannot be solved.");
        else cout<<12<<endl;
    }
}
