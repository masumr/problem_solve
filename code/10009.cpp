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
void pat(int s,int q){
    if(s==q){
        vk.push_back(s);
        return;
    }
    pat(path[s],q);
    vk.push_back(s);
}
int main(){
    int t;
    bool ck=0;
    scanf("%d",&t);
    while(t--){
        if(ck)cout<<endl;
        int n,m;
        scanf("%d%d",&n,&m);
        int cnt=1;
        for(int i=0;i<n;i++){
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
        //cout<<"masum"<<endl;
        for(int i=0;i<m;i++){
            string s1,s2;
            cin>>s1>>s2;
            //cout<<mp[s2]<<' '<<mp[s1]<<endl;
            bfs(mp[s1]);
            pat(mp[s2],mp[s1]);
            for(int i=0;i<vk.size();i++){
                string sp=mp1[vk[i]];
                cout<<sp[0];
            }
            cout<<endl;
            vk.clear();
        }
        for(int i=1;i<=cnt;i++)ed[i].clear();
        mp.clear();mp1.clear();
        ck=1;
    }
}

