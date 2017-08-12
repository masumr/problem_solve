#include<bits/stdc++.h>
using namespace std;
const int N=54;
int ch[N][N];
int n,m;
struct node{
    int x,y,z;
};
int s1,s2,e1,e2;
string s;
map<string,int>mp;
string dir[]={"north","east","south","west"};
int dx[]={1,2,3,-1,-2,-3,0,0,0,0,0,0};
int dy[]={0,0,0,0,0,0,-1,-2,-3,1,2,3};
int dx1[]={0,0,0,1,-1};
int dy1[]={0,-1,1,0,0};
int inf=1234567;
int dis[N][N];
int vis[N][N];
bool cheack(int x,int y){
    bool ck=1;
    for(int i=0;i<5;i++){
        int px=x+dx1[i];
        int py=y+dy1[i];
        if(ch[px][py]==1)ck=0;
    }
    return ck;
}
int value(int x,int y){
    if(x==0 && y<0)return 1;
    else if(y==0 && x>0)return 2;
    else if(x==0 && y>0)return 3;
    else return 4;
}
int min_value(int x,int y,int z){
    if(z==1){
        if(x==0 && y<0)return 1;
        else if(x==0 && y>0)return 3;
        else return 2;
    }else if(z==2){
        if(x>0 && y==0)return 1;
        else if(x<0 && y==0)return 3;
        else return 2;
    }else if(z==3){
        if(x==0 && y>0)return 1;
        else if(x==0 && y<0)return 3;
        else return 2;
    }else{
        if(x<0 && y==0)return 1;
        else if(x>0 && y==0)return 3;
        else return 2;
    }

}
int main(){
    int cnt=1;
    for(int i=0;i<4;i++){
        mp[dir[i]]=cnt;
        cnt++;
    }
    while(scanf("%d%d",&n,&m) &&(n&&m)){
        for(int i=0;i<n;i++)for(int j=0;j<m;j++){
            scanf("%d",&ch[i][j]);
            dis[i][j]=inf;
        }
        scanf("%d%d%d%d",&s1,&s2,&e1,&e2);
        cin>>s;
        queue<node>q;
        //memset(vis,0,sizeof vis);
        node nd;
        nd.z=mp[s];nd.x=s1;nd.y=s2;
        q.push(nd);
        vis[s1][s2]=1;
        dis[s1][s2]=0;
        while(!q.empty()){
            nd=q.front();q.pop();
            for(int i=0;i<12;i++){
                int tx=dx[i]+nd.x;
                int ty=dy[i]+nd.y;
                int len=min_value(dx[i],dy[i],nd.z);
                if((tx>=0 && tx<n)&&(ty>=0 && ty<m) &&dis[nd.x][nd.y]+len<dis[tx][ty]){
                    if(cheack(tx,ty)){
                        cout<<tx<<' '<<ty<<' '<<len<<endl;
                        node nn;
                        nn.x=tx;nn.y=ty;nn.z=value(dx[i],dy[i]);
                        q.push(nn);
                        dis[tx][ty]=dis[nd.x][nd.y]+len;
                        //cout<<tx<<' '<<ty<<' '<<abs(dis[tx][ty]-dis[nd.x][nd.y])<<' '<<dis[tx][ty]<<endl;
                    }
                }
            }
        }
        if(dis[e1][e2]!=inf)printf("%d\n",dis[e1][e2]);
        else printf("-1\n");
    }
}
