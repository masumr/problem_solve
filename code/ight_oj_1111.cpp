#include<bits/stdc++.h>
using namespace std;
const int size=1001;
int ck[size];
int visit[size];
vector<int>city[size],v;
void bfs(int s){
    memset(visit,0,sizeof visit);
    queue<int>q;
    visit[s]=1;
    ck[s]++;
    q.push(s);
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<city[u].size();i++){
            int v=city[u][i];
            if(!visit[v]){
                ck[v]++;
                visit[v]=1;
                q.push(v);
            }
        }
    }
}
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        memset(ck,0,sizeof (ck));
        int k,n,m;
        cin>>k>>n>>m;
        for(int i=0;i<k;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=0;i<m;i++){
                int u,w;
                cin>>u>>w;
                city[u].push_back(w);
        }
        for(int i=0;i<k;i++){
            bfs(v[i]);
        }
        int count=0;
        for(int i=0;i<=n;i++){
            if(ck[i]==k){
                count++;
            }
            city[i].clear();
        }
        printf("Case %d: %d\n",++c,count);
        v.clear();

    }
}
