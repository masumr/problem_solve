#include<cstdio>
#include<queue>
#include<utility>
#include<string.h>
#include<iostream>
using namespace std;
const int N=30;
char ch[N][N];
int dx[]= {1,-1,0,0};
int dy[]= {0,0,-1,1};
int vis[N][N];
int p1,p2,g1,g2;
bool bfs(int i,int j){
    queue<pair<int,int> >q;
    memset(vis,0,sizeof vis);
    vis[i][j]=1;
    q.push(make_pair(i,j));
    while(!q.empty()){
        pair<int,int>u=q.front();q.pop();
        for(int i=0; i<4; i++){
            int tx=dx[i]+u.first;
            int ty=dy[i]+u.second;
            if(tx==g1 && ty==g2)return true;
            if((tx>=0 && tx<30) &&(ty>=0 && ty<30) &&(ch[tx][ty]=='.' && !vis[tx][ty])){
                q.push(make_pair(tx,ty));
                vis[tx][ty]=1;
            }
        }
    }
    return false;
}
int main(){
    while(1){
        for(int i=0; i<30; i++){
            for(int j=0; j<30; j++){
                scanf("%c",&ch[i][j]);
                if(ch[i][j]=='P'){
                    p1=i,p2=j;
                }
                if(ch[i][j]=='G'){
                    g1=i;g2=j;
                }
            }
            getchar();
        }
        if(bfs(p1,p2))printf("Possible\n");
        else printf("Impossible\n");
    }
}
