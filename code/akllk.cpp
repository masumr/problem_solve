#include<bits/stdc++.h>
using namespace std;
const int si=12345;
vector<int>v[si];
int vis[si];
int a[si];
void bfs(int n){
    queue<int>q;
    q.push(n);
    vis[n]=1;;
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<v[u].size();i++){
            int vv=v[u][i];
            if(!vis[vv]){
                q.push(vv);
                vis[vv]=1;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int mx=0,k=0;
    for(int i=1;i<=n;i++){
            cin>>a[i];
            if(mx<a[i]){
                k=i;
                mx=a[i];
            }
        }
    for(int i=k-1;i>=2;i--){
        v[a[i]].push_back(i);
        v[i].push_back(a[i]);
    }
    for(int i=k;i<=n;i++){
        v[a[i]].push_back(i);
        v[i].push_back(a[i]);
    }
    memset(vis,0,sizeof vis);
    int count=0;
    for(int i=1;i<=n;i++){
        if(!vis[a[i]]){
            //cout<<a[i]<<' ';
            bfs(a[i]);
            count++;
        }
    }
    cout<<count<<endl;
}
