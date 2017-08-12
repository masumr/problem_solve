#include<bits/stdc++.h>
using namespace std;
const int N=30007;
vector<int>v[N];
int col[N];
int co;
int dfs(int n){
    col[n]=1;
    for(int i=0;i<v[n].size();i++){
        int ss=v[n][i];
        if(col[ss]==0){
            co++;
            dfs(ss);
        }
    }
    return co;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        memset(col,0,sizeof col);
        while(m--){
            int x,y;
            scanf("%d%d",&x,&y);
            v[x].push_back(y);
            v[y].push_back(x);
        }
        int mx=0;
        for(int i=1;i<=n;i++){
            if(col[i]==0){
                co=0;
                mx=max(mx,dfs(i));
            }
        }
        printf("%d\n",mx+1);
        for(int i=1;i<=n;i++)v[i].clear();
    }
}
