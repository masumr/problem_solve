#include<bits/stdc++.h>
using namespace std;
const int N=101;
int dis[N][N];
const int inf=1234568;
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)for(int j=0;j<n;j++)dis[i][j]=inf;
        for(int i=0;i<n;i++)dis[i][i]=0;
        int m;
        scanf("%d",&m);
        while(m--){
            int u,v;
            scanf("%d%d",&u,&v);
            dis[u][v]=1;
            dis[v][u]=1;
        }
        for(int i=0;i<n;i++)for(int j=0;j<n;j++)for(int k=0;k<n;k++)dis[j][k]=min(dis[j][k],dis[j][i]+dis[i][k]);
        int s,d;
        scanf("%d%d",&s,&d);
        int mx=0;
        for(int i=0;i<n;i++){
            if(dis[s][i]!=inf && dis[i][d]!=inf){
                cout<<dis[i]<<' '<<dis[i+1]<< ' '<<endl;
                mx=max(mx,dis[s][i]+dis[i][d]);
            }
        }
        printf("Case %d: %d\n",++c,mx);
    }
}
