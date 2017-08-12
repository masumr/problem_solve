#include<bits/stdc++.h>
using namespace std;
int dx[]={1,1,-1,-1,1,-1,0,0};
int dy[]={1,-1,-1,1,0,0,-1,1};
int dx1[]={-1,1,-1,1,-2,-2,2,2};
int dy1[]={-2,-2,2,2,1,-1,1,-1};
const int N=103;
int n,m;
char ch[N][N];
int dis[N][N];
int dis1[N][N];
int inf=1234567;
int a1,a2,b1,b2;
void bfs(int i,int j){
    memset(dis,-1,sizeof dis);
    //memset(vis,0,sizeof vis);
    //vis[i][j]=0;
    dis[i][j]=0;
    queue<pair<int,int> >q;
    q.push(make_pair(i,j));
    while(!q.empty()){
        pair<int,int> u=q.front();q.pop();
        for(int i=0;i<8;i++){
            int tx=dx[i]+u.first;
            int ty=dy[i]+u.second;
            if(tx==b1 && ty==b2){
                dis[tx][ty]=dis[u.first][u.second]+1;
                return;
            }
            //if(vis[u.first][u.second])vis[tx][ty]=1;
            if((tx>=1 && tx<=n) &&(ty>=1 && ty<=m) &&(dis[tx][ty]==-1)){
                //cout<<dis[u.first][u.second]+1<<' '<<dis1[tx][ty]<<endl;
                if(!dis1[tx][ty]){
                    dis[tx][ty]=dis[u.first][u.second]+1;
                    q.push(make_pair(tx,ty));
                   // if(dis[u.first][u.second]+1>=dis1[tx][ty])vis[tx][ty]=1;
               }
            }
        }
    }
}
void bfs1(int i,int j){
        dis1[i][j]=1;
        for(int k=0;k<8;k++){
            int tx=dx1[k]+i;
            int ty=dy1[k]+j;
            if((tx>=1 && tx<=n) &&(ty>=1 && ty<=m)&& ch[tx][ty]=='.'){
                dis1[tx][ty]=1;
                //q.push(make_pair(tx,ty));
            }
        }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        vector<pair<int,int> >v;
        scanf("%d%d",&n,&m);
        getchar();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                scanf("%c",&ch[i][j]);
                if(ch[i][j]=='A')a1=i,a2=j;
                else if(ch[i][j]=='B')b1=i,b2=j;
                else if(ch[i][j]=='Z')v.push_back(make_pair(i,j));
                dis1[i][j]=inf;
            }
            getchar();
        }
        for(int i=0;i<v.size();i++){
            bfs1(v[i].first,v[i].second);
        }
        bfs(a1,a2);
        //cout<<dis[b1][b2]<<endl;
        if(dis[b1][b2]==-1)printf("King Peter, you can't go now!\n");
        else printf("Minimal possible length of a trip is %d\n",dis[b1][b2]);
        v.clear();
    }
}

