#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
char a[100][100];
int dis[1000][1000];
int vis[1000][1000];
int dx[]={1,-1,0,0};
int dy[]={0,0,-1,1};
int mx=0,mr,mc;
int c,r;
void bfs(int x,int y,int c,int r){
    memset(dis,-1,sizeof dis);
    memset(vis,0,sizeof vis);
    queue<pii>q;
    q.push(pii(x,y));
    vis[x][y]=1;
    dis[x][y]=0;
    while(!q.empty()){
        pii top=q.front();q.pop();
        for(int i=0;i<4;i++){
            int tx=top.first+dx[i];
            int ty=top.second+dy[i];
            if(tx>=0 && tx<r && ty>=0 && ty<c && a[tx][ty]!='#' && !vis[tx][ty]){
                //ncout<<tx<<' '<<ty<<endl;
                dis[tx][ty]=dis[top.first][top.second]+1;
                q.push(pii(tx,ty));
                vis[tx][ty]=1;
            }
        }
    }
}
int main(){
    int s,c,r;
    while(cin>>s>>c>>r && (s!=0&&r!=0&& c!=0)){
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++)a[i][j]='#';
        }
        int x,y,x1,y1;
        for(int i=0;i<s;i++){
            for(int j=0;j< c;j++){
                for(int k=0;k<r;k++)
                {
                    char s;
                    cin>>s;
                    if(s=='.')a[j][k]=s;
                    if(s=='S'){
                        a[j][k]=s;
                        x=j;
                        y=k;
                    }
                    if(s=='E'){
                        a[j][k]=s;
                        x1=j;
                        y1=k;
                    }
                }
            }
        }
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++)cout<<a[i][j]<<' ';
            cout<<endl;
        }
        bfs(x,y,c,r);
        cout<<dis[y1][x1]<<endl;
    }

}
