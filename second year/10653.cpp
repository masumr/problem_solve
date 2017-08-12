#include<bits/stdc++.h>
using namespace std;
const int N=1001;
int dx[]={1,-1,0,0};
int dy[]={0,0,-1,1};
int g[N][N];
int dis[N][N];
int vis[N][N];
int r,c;
void bfs(int s1,int s2){
    //memset(vis,0,sizeof vis);
    queue<pair<int,int> >q;
    dis[s1][s2]=0;
    //vis[s1][s2]=1;
    //vis[s2][s1]=1;
    q.push(pair<int,int>(s1,s2));
    while(!q.empty()){
        pair<int,int>u=q.front();q.pop();
        for(int i=0;i<4;i++){
            int tx=dx[i]+u.first;
            int ty=dy[i]+u.second;
            if((tx>=0 && tx<r) && (ty>=0 && ty<c )&&g[tx][ty]!=1){
                if(dis[u.first][u.second]+1<dis[tx][ty]){
                    dis[tx][ty]=dis[u.first][u.second]+1;
                    q.push(pair<int,int>(tx,ty));
                }
            }
        }
    }

}
int main(){
    while(scanf("%d%d",&r,&c) &&(r && c)){
        int n;
        scanf("%d",&n);
        memset(g,0,sizeof g);
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++)dis[i][j]=INT_MAX;
        }
        while(n--){
            int row,col,kk;
            scanf("%d%d",&row,&kk);
            while(kk--){
                scanf("%d",&col);
                g[row][col]=1;
            }
        }
        int s1,s2,e1,e2;
        scanf("%d%d",&s1,&s2);
        //cout<<1<<endl;
        bfs(s1,s2);
        //cout<<1<<endl;
        scanf("%d%d",&e1,&e2);
        cout<<dis[e1][e2]<<endl;
    }
}
