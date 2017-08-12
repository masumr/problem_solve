#include<bits/stdc++.h>
using namespace std;
const int nn=1007;
int vis[nn],dis[nn];
bitset<nn>p;
vector<int>v;
void sieve(){
    for(int i=3;i*i<=nn;i++)if(p[i]==0)for(int j=i*i;j<=nn;j+=(i<<1))p[j]=1;
    v.push_back(2);
    for(int i=3;i<=nn;i+=2)if(p[i]==0)v.push_back(i);
}
int bfs(int n,int b)  {
    memset(vis,0,sizeof(vis));
    memset(dis,0,sizeof(dis));
    queue<int> q;
    vis[n]=1;
    dis[n]=0;
    q.push(n);
    while(!q.empty())  {
        int u=q.front();q.pop();
        if(u==b) return dis[u];
        if(u>b) continue;
        for(int i=0;v[i]<=u;i++)if(u%v[i]==0&&v[i]!=u){
           int t=u+v[i];
           if(t>b||vis[t]) continue;
           dis[t]=dis[u]+1;
           vis[t]=1;
           q.push(t);
        }
    }
    return -1;
}
int main(){
    sieve();
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);
        printf("Case %d: ",++c);
        if(x>y)printf("-1\n");
        else{
            printf("%d\n",bfs(x,y));
        }
    }
}
