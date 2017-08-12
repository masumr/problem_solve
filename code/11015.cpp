#include<bits/stdc++.h>
using namespace std;
const int N=25;
int dis[25];
int dd[N][N];
struct node{
    int u,w;
    bool operator<(const node& p)const{
        return w<p.w;
    }
};
int inf=123456789;
map<int,string>mp;
vector<int>ed[N],cost[N];
void dij(int s){
    priority_queue<node>pq;
    dis[s]=0;
    node nd;
    nd.u=s;nd.w=0;
    pq.push(nd);
    while(!pq.empty()){
        nd=pq.top();pq.pop();
        //cout<<nd.u<<' '<<nd.w<<endl;
        int u=nd.u;
        for(int i=0;i<ed[u].size();i++){
            int vcost=dis[u]+cost[u][i];
            //cout<<vcost<<endl;
            int v=ed[u][i];
            //cout<<u<<' '<<v<<' '<<vcost<<endl;
            if(vcost<dis[v]){
                node np;
                np.u=v;np.w=vcost;
                dis[v]=vcost;
                pq.push(np);
            }
        }
    }
}
int main(){
    int n,m,c=0;
    while(scanf("%d%d",&n,&m) &&(n&&m)){
        string s;
        cin.ignore(100, '\n');
        getchar();
        for(int i=1;i<=n;i++){
            getline(cin,s);
            mp[i]=s;
        }
        for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)dd[i][j]=inf;
        while(m--){
            int x,y,z;
            scanf("%d%d%d",&x,&y,&z);
            dd[x][y]=z;
            dd[y][x]=z;
        }
        for(int i=1;i<=n;i++)dd[i][i]=0;
        for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)for(int k=1;k<=n;k++)dd[j][k]=min(dd[j][k],dd[j][i]+dd[i][k]);
        int mx=inf,id;
        for(int i=1;i<=n;i++){
            int sum=0;
            for(int j=1;j<=n;j++){
                sum+=dd[i][j];
            }
            if(mx>sum){
                mx=sum;
                id=i;
            }
        }
        printf("Case #%d : ",++c);
        cout<<mp[id]<<endl;
        mp.clear();
    }
}
