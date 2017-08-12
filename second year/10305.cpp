#include<bits/stdc++.h>
using namespace std;
const int N=103;
vector<int>ed[N];
int vis[N];
stack<int>qq;
void dfs(int s){
    vis[s]=1;
    for(int i=0;i<ed[s].size();i++){
        int v=ed[s][i];
        if(!vis[v]){
            dfs(v);
        }
    }
    qq.push(s);
}
int main(){
    int n,m;
    while(scanf("%d%d",&n,&m) &&(n||m)){
        for(int i=1;i<=m;i++){
            int a,b;
            scanf("%d%d",&a,&b);
            ed[a].push_back(b);
        }
        memset(vis,0,sizeof vis);
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                dfs(i);
            }
        }
        while(!qq.empty()){
            cout<<qq.top();qq.pop();
            if(!qq.empty())cout<<' ';
        }
        cout<<endl;
    }
}
