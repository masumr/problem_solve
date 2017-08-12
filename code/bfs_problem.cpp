#include<bits/stdc++.h>
using namespace std;
vector<int>v[1001];
int dis[1001];
int vist[1000];
void bfs(int s){
    memset(dis,-1,sizeof dis);
    memset(vist,0,sizeof vist);
    queue<int>q;
    q.push(s);
    dis[s]=0;
    vist[s]=1;
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<v[u].size();i++){
            int w=v[u][i];
            if(!vist[w]){
                vist[w]=1;
                dis[w]=dis[u]+6;
                q.push(w);
            }

        }
    }
}
int main(){
    int q;
    cin>>q;
    while(q--){
        int n,m,s,x,y;
        cin>>n>>m;
        for(int i=0;i<m;i++){
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        cin>>s;
        bfs(s);
        for(int i=1;i<=n;i++){
            if(i!=s){
                cout<<dis[i];
                if(i!=n)cout<<' ';
            }
        }
        cout<<endl;
        for(int i=1;i<=1001;i++)v[i].clear();
    }
}
