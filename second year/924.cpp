#include<bits/stdc++.h>
using namespace std;
const int N=2503;
vector<int>ed[N];
int dis[N];
map<int,int>mp;
void bfs(int s){
    memset(dis,-1,sizeof dis);
    dis[s]=0;
    queue<int>q;
    q.push(s);
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<ed[u].size();i++){
            int v=ed[u][i];
            if(dis[v]==-1){
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }
    }
}
int main(){
    int n;
    while(scanf("%d",&n)==1){
        for(int i=0;i<n;i++){
            int tt;
            scanf("%d",&tt);
            while(tt--){
                int x;
                scanf("%d",&x);
                ed[i].push_back(x);
            }
        }
        int t;
        scanf("%d",&t);
        while(t--){
            int s;
            scanf("%d",&s);
            bfs(s);
            for(int i=0;i<n;i++){
                if(dis[i]!=-1)mp[dis[i]]++;
            }
            int mx=0,in;
            for(int i=0;i<n;i++){
                //cout<<mp[i]<<' ';
                if(mx<mp[i]){
                    mx=mp[i];
                    in=i;
                }
            }
            //cout<<endl;
            if(ed[s].size()==0)printf("0\n");
            else printf("%d %d\n",mp[in],in);
            mp.clear();
        }
        for(int i=0;i<n;i++)ed[i].clear();
        //mp.clear();

    }
}
