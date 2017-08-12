#include<bits/stdc++.h>
using namespace std;
const int N=123;
int dis[N];
vector<int>ed[N];
int bfs(int c1,int c2){
    memset(dis,-1,sizeof dis);
    queue<int>q;
    q.push(c1);
    dis[c1]=0;
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<ed[u].size();i++){
            int v=ed[u][i];
            if(v==c2){
                return dis[u];
            }
            if(dis[v]==-1){
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            int x,y;
            scanf("%d%d",&x,&y);
            while(y--){
                int a;
                scanf("%d",&a);
                ed[x].push_back(a);
            }
        }
        cout<<"mas"<<endl;
        int c1,c2;
        scanf("%d%d",&c1,&c2);
        printf("%d %d %d\n",c1,c2,bfs(c1,c2));
    }
}
