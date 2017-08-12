#include<bits/stdc++.h>
using namespace std;
struct node{
    int u,v,w;
    bool operator<(const node& p)const{
        return w>p.w;
    }
};
const int N=1000;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int a[N][N];
int dis[N][N];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        //cout<<n<<' '<<m<<endl;
        for(int i=0;i<n;i++)for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            dis[i][j]=INT_MAX;
        }
        //for(int i=0;i<m;i++)cout<<a[0][i]<<' ';
        priority_queue<node>p;
        dis[0][0]=a[0][0];
        node nd;
        nd.u=0,nd.v=0,nd.w=a[0][0];
        p.push(nd);
        while(!p.empty()){
            node top=p.top();p.pop();
            int u=top.u;
            int v=top.v;
            int co=top.w;
            for(int i=0;i<4;i++){
                int tx=u+dx[i];
                int ty=v+dy[i];
                //if(tx>=0 && ty>=0)cout<<tx<<' '<<ty<<' '<<a[tx][ty]<<' '<<co<<endl;
                if((tx>=0 && tx<n)&&(ty>=0 && ty<m)&&(dis[tx][ty]>a[tx][ty]+co)){
                    nd.u=tx;
                    nd.v=ty;
                    dis[tx][ty]=co+a[tx][ty];
                    //cout<<dis[tx][ty]<<' ';
                    nd.w=dis[tx][ty];
                    p.push(nd);
                }
            }
        }
        cout<<dis[n-1][m-1]<<endl;
    }
}
