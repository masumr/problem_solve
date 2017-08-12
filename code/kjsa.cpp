#include<bits/stdc++.h>
using namespace std;
const int N=123456;
vector<int>ed[N];
int vis[N];
int ss[N];
int x;
void dfs(int s,int c){
    if(ss[s]==0)c=0;
    c+=ss[s];
    if(c>x)return;
    vis[s]=1;
    for(int i=0;i<ed[s].size();i++)
    if(!vis[ed[s][i]])dfs(ed[s][i],c);
}
int main(){
    int n;
    cin>>n>>x;
    for(int i=1;i<=n;i++)cin>>ss[i];
    memset(vis,0,sizeof vis);
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        ed[v].push_back(u);
        ed[u].push_back(v);
    }
    dfs(1,0);
    int count=0;
    for(int i=2;i<=n;i++){
        if(ed[i].size()==1 && vis[i]==1)count++;
    }
    cout<<count<<endl;
}
