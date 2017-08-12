#include<bits/stdc++.h>
using namespace std;
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
const int N=26;
int vis[N][N];
char ed[N][N];
int n;
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
            if((tx>=0 && tx<n) &&(ty>=0 && ty<n)){
                if(!vis[tx][ty] && ed[tx][ty]!='0'){
                    q.push(pair<int,int>(tx,ty));
                    vis[tx][ty]=1;
                }
            }
        }
    }
}
int main(){
    int c=0;
    while(scanf("%d",&n)==1){
        getchar();
        //cout<<n<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            {
                scanf("%c",&ed[i][j]);
            }
            getchar();
        }
        int count=0;
        memset(vis,0,sizeof vis);
       // cout<<1287821<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && ed[i][j]=='1'){
                    bfs(i,j);
                    count++;
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",++c,count);
    }
}
