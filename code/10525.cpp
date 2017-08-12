#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=29;
ll dis[N][N],tim[N][N];
ll inf=1234567221121212;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=1;i<=N;i++)for(int j=1;j<=N;j++){
            dis[i][j]=inf;
            tim[i][j]=inf;
        }
        for(int i=1;i<=n;i++){
            dis[i][i]=0;
            tim[i][i]=0;
        }
        for(int i=0;i<m;i++){
            int a,b;
            ll c,d;
            scanf("%d%d %lld%lld",&a,&b,&c,&d);
            if(tim[a][b]>c){
                tim[a][b]=c;
                tim[b][a]=c;
                dis[a][b]=d;
                dis[b][a]=d;
            }
            else if(tim[a][b]==c && dis[a][b]>d){
                dis[a][b]=d;
                dis[b][a]=d;
            }
        }
        for(int k=1;k<=n;k++){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){

                        ll sum=dis[i][k]+dis[k][j];
                        ll sum2=tim[i][k]+tim[k][j];
                        //cout<<sum<<' '<<sum2<<' '<<dis[i][j]<<' '<<tim[i][j]<<' '<<i<<' '<<j<<' '<<k<<endl;
                        if(sum2<tim[i][j]){
                            dis[i][j]=sum;
                            tim[i][j]=sum2;
                        }
                        else if(sum2==tim[i][j] && sum<dis[i][j]){
                            dis[i][j]=sum;
                        }
                }
            }
        }
        int q;
        scanf("%d",&q);
        while(q--){
            int a,b;
            scanf("%d%d",&a,&b);
            if(dis[a][b]==inf)printf("No Path.\n");
            else printf("Distance and time to reach destination is %lld & %lld.\n",dis[a][b],tim[a][b]);
        }
        printf("\n");
    }
}
