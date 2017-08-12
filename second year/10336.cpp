#include<bits/stdc++.h>
using namespace std;
struct node{
    char k;
    int v;
};
const int N=1001;
int dx[]={1,-1,0,0};
int dy[]={0,0,-1,1};
char ch[N][N];
int vis[N][N];
int n,m;
void bfs(int a,int b,char ck){
    queue<pair<int,int> >q;
    vis[a][b]=1;
    q.push(make_pair(a,b));
    while(!q.empty()){
        pair<int,int> top=q.front();q.pop();
        for(int i=0;i<4;i++){
            int tx=dx[i]+top.first;
            int ty=dy[i]+top.second;
            if((tx>=1 && tx<=n) && (ty>=1 && ty<=m) && (!vis[tx][ty])){
                if(ch[tx][ty]==ck){
                    q.push(make_pair(tx,ty));
                    vis[tx][ty]=1;
                }
            }
        }
    }
}
vector<char>v;
vector<node>vk;
bool com(node a,node b){
    if(a.v>b.v)return true;
    else if(a.v==b.v){
        if(a.k<b.k)return true;
        else return false;
    }
    else return false;
}
map<char,int>mp;
int  main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        getchar();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                scanf("%c",&ch[i][j]);
                if(!mp[ch[i][j]]){
                    v.push_back(ch[i][j]);
                    mp[ch[i][j]]++;
                }
            }
            getchar();
        }
        mp.clear();
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                if(!vis[i][j]){
                    bfs(i,j,ch[i][j]);
                    mp[ch[i][j]]++;
                }
            }
        }
        printf("World #%d\n",++c);
        for(int i=0;i<v.size();i++){
            node nd;
            nd.k=v[i],nd.v=mp[v[i]];
            vk.push_back(nd);
        }
        sort(vk.begin(),vk.end(),com);
        for(int i=0;i<vk.size();i++){
            printf("%c: %d\n",vk[i].k,vk[i].v);
        }
        mp.clear();v.clear();vk.clear();
    }
}
