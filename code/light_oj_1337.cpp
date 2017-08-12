#include<bits/stdc++.h>
using namespace std;
int dx[]={1,-1,0,0};
int dy[]={0,0,-1,1};
const int N=503;
char ch[N][N];
int vis[N][N];
int dis[N][N];
int n,m,x;
int bfs(int a,int b){
    int cnt=0;
    queue<pair<int,int> >q;
    q.push(make_pair(a,b));
    vis[a][b]=1;
    if(ch[a][b]=='C')cnt++;
    while(!q.empty()){
        pair<int,int>top=q.front();q.pop();
        for(int i=0;i<4;i++){
            int tx=dx[i]+top.first;
            int ty=dy[i]+top.second;
            //cout<<tx<<' '<<ty<<' ';
            if((tx>=0 && tx<n) &&(ty>=0 && ty<m) && (ch[tx][ty]!='#' && !vis[tx][ty])){
                //cout<<tx<<' '<<ty<<' '<<ch[tx][ty]<<endl;
                q.push(make_pair(tx,ty));
                if(ch[tx][ty]=='C')cnt++;
                vis[tx][ty]=1;
            }
        }
    }
    return cnt;
}
int vis1[N][N];
void bfs1(int a,int b,int cnt){
    queue<pair<int,int> >q;
    memset(vis1,0,sizeof vis1);
    q.push(make_pair(a,b));
    vis1[a][b]=1;
    dis[a][b]=cnt;
    while(!q.empty()){
        pair<int,int>top=q.front();q.pop();
        for(int i=0;i<4;i++){
            int tx=dx[i]+top.first;
            int ty=dy[i]+top.second;
            //cout<<tx<<' '<<ty<<' ';
            if((tx>=0 && tx<n) &&(ty>=0 && ty<m) && (ch[tx][ty]!='#' && !vis1[tx][ty])){
                //cout<<tx<<' '<<ty<<' '<<ch[tx][ty]<<endl;
                q.push(make_pair(tx,ty));
                dis[tx][ty]=cnt;
                vis1[tx][ty]=1;
            }
        }
    }
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&n,&m,&x);
        getchar();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%c",&ch[i][j]);
            }
            getchar();
        }
        printf("Case %d:\n",++c);
        memset(vis,0,sizeof vis);
        memset(dis,0,sizeof dis);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && ch[i][j]!='#'){
                    int cnt=bfs(i,j);
                    //cout<<cnt<<' ';
                    bfs1(i,j,cnt);
                }

            }
        }
        /*for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<dis[i][j]<<' ';
            }
            cout<<endl;
        }*/
        for(int i=0;i<x;i++){
            int a,b;
            scanf("%d%d",&a,&b);
            printf("%d\n",dis[a-1][b-1]);
        }
    }
}
