#include<bits/stdc++.h>
using namespace std;
const int N=100005;
vector<int>ed[N];
map<string,int>mp;
map<int,string>mp1;
int vis[N];
int path[N];
void bfs(int s){
    queue<int>q;
    memset(vis,0,sizeof vis);
    q.push(s);
    vis[s]=1;
    path[s]=0;
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<ed[u].size();i++){
            int v=ed[u][i];
            if(!vis[v]){
                vis[v]=1;
                path[v]=u;
                q.push(v);
            }
        }
    }
}
vector<int>vk;
void pat(int s){
    if(path[s]==0){
        vk.push_back(s);
        return;
    }
    pat(path[s]);
    vk.push_back(s);
}
int main(){
    int t;
    bool ck=0;
    while(scanf("%d",&t)==1){
        if(ck)cout<<endl;
        int cnt=1;
        for(int i=0;i<t;i++){
            string s1,s2;
            cin>>s1>>s2;
            if(!mp[s1]){
                mp[s1]=cnt;
                mp1[cnt]=s1;
                cnt++;
            }
            if(!mp[s2]){
                mp[s2]=cnt;
                mp1[cnt]=s2;
                cnt++;
            }
            ed[mp[s1]].push_back(mp[s2]);
            ed[mp[s2]].push_back(mp[s1]);
        }
        string s1,s2;
        cin>>s1>>s2;
        if(!mp[s1]){
            mp[s1]=cnt;
            mp1[cnt]=s1;
            cnt++;
        }
        if(!mp[s2]){
            mp[s2]=cnt;
            mp1[cnt]=s2;
            cnt++;
        }
        bfs(mp[s1]);
        if(!vis[mp[s2]])printf("No route\n");
        else{
            pat(mp[s2]);
            for(int i=0;i<vk.size()-1;i++){
                cout<<mp1[vk[i]]<<' '<<mp1[vk[i+1]]<<endl;
            }
        }
        for(int i=1;i<=cnt;i++)ed[i].clear();
        vk.clear();
        mp.clear();mp1.clear();
        ck=1;
    }
}
