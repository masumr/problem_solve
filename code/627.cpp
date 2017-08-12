#include<bits/stdc++.h>
using namespace std;
const int N=55;
vector<int>ed[N];
int dis[N];
int path[N];
void bfs(int x,int y){
    queue<int>q;
    memset(dis,-1,sizeof dis);
    dis[x]=0;
    path[x]=0;
    q.push(x);
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<ed[u].size();i++){
            int v=ed[u][i];
            if(v==y){
                dis[v]=dis[u]+1;
                path[v]=u;
                return;
            }
            if(dis[v]==-1){
                dis[v]=dis[u]+1;
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
    int n;
    while(scanf("%d",&n)==1){
        //getchar();
        for(int i=1;i<=n;i++){
            string s;
            cin>>s;
            int sum=0;
            vector<int>v;
            for(int i=0;i<s.size();i++){
                if(s[i]>='0' && s[i]<='9'){
                    sum=sum*10+(s[i]-'0');
                }
                else{
                    v.push_back(sum);
                    sum=0;
                }
            }
            if(sum)v.push_back(sum);
            for(int i=1;i<v.size();i++){
                ed[v[0]].push_back(v[i]);
            }
            v.clear();
        }
        /*for(int i=1;i<=n;i++){
            for(int j=0;j<ed[i].size();j++){
                cout<<ed[i][j]<<' ';
            }
            cout<<endl;
        }*/
        int t;
        scanf("%d",&t);
        printf("-----\n");
        while(t--){
            int x,y;
            scanf("%d%d",&x,&y);
            bfs(x,y);
            if(dis[y]==-1)printf("connection impossible\n");
            else{
                pat(y);
                for(int i=0;i<vk.size();i++){
                    printf("%d",vk[i]);
                    if(i!=vk.size()-1)printf(" ");
                }
                printf("\n");
                vk.clear();
            }
        }
        for(int i=0;i<=n;i++)ed[i].clear();
    }
}
