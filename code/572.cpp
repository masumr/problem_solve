#include<bits/stdc++.h>
using namespace std;
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
const int N=101;
int vis[N][N];
char ed[N][N];
int n,m;
void bfs(int i,int j){
    //cout<<"mas"<<endl;
    queue<pair<int,int> >q;
    vis[i][j]=1;
    q.push(pair<int,int>(i,j));
    while(!q.empty()){
        pair<int,int>u=q.front();q.pop();
        for(int i=0;i<8;i++){
            int tx=u.first+dx[i];
            int ty=u.second+dy[i];
            if((tx>=0 && tx<n) &&(ty>=0 && ty<m)){
                if(!vis[tx][ty] && ed[tx][ty]=='@'){
                    //cout<<tx<<' '<<ty<<endl;
                    q.push(pair<int,int>(tx,ty));
                    vis[tx][ty]=1;
                }
            }
        }
    }
}
int main(){
    int c=0;
    while(scanf("%d %d",&n,&m)&&(n && m)){
        getchar();
        //cout<<n<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            {
                scanf("%c",&ed[i][j]);
            }
            getchar();
        }
        int count=0;
        memset(vis,0,sizeof vis);
       // cout<<1287821<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && ed[i][j]=='@'){
                    bfs(i,j);
                    //cout<<i<<' '<<j<<endl;
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }
}

