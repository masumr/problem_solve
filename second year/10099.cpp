#include<bits/stdc++.h>
using namespace std;
int dis[110][110];
int x,y,d;
int main(){
    int n,r;
    int c=0;
    while(scanf("%d%d",&n,&r) &&(n&&r)){
        memset(dis,-1,sizeof dis);
        while(r--){
            node nd;
            scanf("%d%d%d",&nd.x,&nd.y,&nd.w);
            //cout<<nd.x<<' '<<nd.y<<' '<<nd.w<<endl;
            dis[nd.x][nd.y]=nd.w;
            dis[nd.y][nd.x]=nd.w;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                for(int k=1;k<=n;k++){
                    dis[j][i]=dis[i][j]=max(dis[i][j],min(dis[i][k],dis[k][j]));
                }
            }
        }
        scanf("%d%d%d",&x,&y,&d);
        //cout<<dis[x][y]<<endl;
        int mx=dis[x][y]-1;
        mx=max(1,mx);
        int val=(d/mx);
        if(d%mx)val++;
        printf("Scenario #%d\n",++c);
        printf("Minimum Number of Trips = %d\n\n",val);
//        v.clear();mp.clear();
    }
}
