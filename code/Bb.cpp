#include<bits/stdc++.h>
using namespace std;
const int N=1003;
int dx[]={1,-1};
int dy[]={0,0};
char ch[N][N];
bool vis1[N][N],vis[N][N];
int pat1[N][N];
int n,m;
void bfs1(int i,int j){
    queue<pair<int,int> >q;
    vis[i][j]=1;
    q.push(make_pair(i,j));
    while(!q.empty()){
        pair<int,int>p=q.front();q.pop();
        for(int i=0;i<2;i++){
            int tx=dy[i]+p.first;
            int ty=dx[i]+p.second;
            if((tx>=1 && tx<=n)&&(ty>=1 && ty<=m)&&(!vis[tx][ty] && ch[tx][ty]!='*')){
               vis[tx][ty]=1;
                q.push(make_pair(tx,ty));
            }
        }
    }
}
void bfs(int i,int j){
    queue<pair<int,int> >q;
    vis1[i][j]=1;
    q.push(make_pair(i,j));
    while(!q.empty()){
        pair<int,int>p=q.front();q.pop();
        for(int i=0;i<2;i++){
            int tx=dy[i]+p.first;
            int ty=dx[i]+p.second;
            if((tx>=1 && tx<=n)&&(ty>=1 && ty<=m)&&(!vis1[tx][ty] && ch[tx][ty]!='*')){
               vis1[tx][ty]=1;
                q.push(make_pair(tx,ty));
            }
        }
    }
}
bool ck(int i,int j,int k){
    int mn=min(i,j);
    int mx=max(i,j);
    for(int z=mn;z<=mx;z++){
        //cout<<ch[z][k]<<' ';
        if(ch[z][k]=='*')return 0;
    }
    //cout<<endl;
    return 1;
}
int main(){
    memset(vis,0,sizeof vis);
    memset(vis1,0,sizeof vis1);
    cin>>n>>m;
    int x1,x2,y1,y2;
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++){
        cin>>ch[i][j];
        if(ch[i][j]=='S')x1=i,y1=j;
        if(ch[i][j]=='T')x2=i,y2=j;
    }
    bfs1(x1,y1);
    bfs(x2,y2);
    bool cp=0;
    //for(int i=1;i<=m;i++)cout<<vis[x1][i]<<' ';
   // cout<<endl;
   // for(int i=1;i<=m;i++)cout<<vis1[x2][i]<<' ';
    //cout<<endl;
    for(int i=1;i<=m;i++){
        if(vis[x1][i] && vis1[x2][i]){
            if(ck(x1,x2,i)){
                //cout<<x1<<' '<<x2<<' '<<i<<endl;
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
}
