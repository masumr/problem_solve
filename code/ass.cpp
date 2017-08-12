#include<bits/stdc++.h>
using namespace std;
int state[100004];
int m;
vector<int>edges[100004];
int visit[100004];


void dfs(int s,int cnt){

        if(state[s]==0)cnt=0;
        cnt+=state[s];
        //cout<<cnt<<endl;
        if(cnt>m)return;
        visit[s]=1;
        for(int i=0;i<edges[s].size();i++){
                if(visit[edges[s][i]]==0)
                dfs(edges[s][i],cnt);
        }
}


int main(){

    int n;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        scanf("%d",&state[i]);
    }
    memset(visit,0,sizeof visit);
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    dfs(1,0);
    int ck=0;
    for(int i=2;i<=n;i++){
        if(edges[i].size()==1&&visit[i]==1){
            ck++;
        }
    }
cout<<ck<<endl;




}
