#include<bits/stdc++.h>
using namespace std;
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
char a[22][22];
int x,y;
int visited[22][22],dis[22][22];
void bfs(int s1,int s2){
    memset(visited,0,sizeof visited);
    memset(dis,-1,sizeof dis);
    visited[s1][s2]=1;
    queue<pair<int,int> >q;
    dis[s1][s2]=0;
    q.push(make_pair(s1,s2));
    while(!q.empty()){
        pair<int,int> top=q.front();q.pop();
        int ui=top.first;
        int uj=top.second;
        for(int i=0;i<4;i++){
            int vi=ui+fx[i];
            int vj=uj+fy[i];
            if((vi>=1 && vi<=x) && (vj>=1 && vj<=y) && (a[vi][vj]!='#')&& (a[vi][vj]!='m')){
                if(!visited[vi][vj]){
                    q.push(make_pair(vi,vj));
                    visited[vi][vj]=1;
                   // cout<<vi<<' '<<vj<<endl;
                    dis[vi][vj]=dis[ui][uj]+1;
                }
            }
        }
    }

}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&x,&y);
        int x1,y1,x2,y2,x3,y3,x4,y4;
        //getchar();
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                scanf("%c",&a[i][j]);
                if(a[i][j]=='h'){x1=i;y1=j;}
                else if(a[i][j]=='b'){x2=i;y2=j;}
                else if(a[i][j]=='c'){x3=i;y3=j;}
                else if(a[i][j]=='a'){x4=i;y4=j;}
            }
            getchar();
        }
        int mx=0;
        bfs(x1,y1);
        //cout<<dis[x2][y2]<<' '<<dis[x3][y3]<<' '<<dis[x4][y4]<<endl;
        mx=max(mx,dis[x2][y2]);mx=max(mx,dis[x3][y3]);mx=max(mx,dis[x4][y4]);
        printf("Case %d: %d\n",++c,mx);
    }
}
