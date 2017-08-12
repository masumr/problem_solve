#include<bits/stdc++.h>
using namespace std;
const int N=103;
vector<int>ed[N];
set<int>s;
int dis[N];
void bfs(int ss){
    memset(dis,-1,sizeof dis);
    queue<int>q;
    q.push(ss);
    dis[ss]=0;
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<ed[u].size();i++){
            int v=ed[u][i];
            if(dis[v]<0){
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }
    }
}
int main(){
    int c=0;
    int x,y;
    while(scanf("%d%d",&x,&y) && (x&&y)){
        while(x && y){
            ed[x].push_back(y);
            s.insert(x);
            s.insert(y);
            scanf("%d%d",&x,&y);
        }
        int cnt=0;
        int sum=0;
        for(set<int>::iterator it=s.begin();it!=s.end();it++){
            bfs(*it);
            for(set<int>::iterator ip=s.begin();ip!=s.end();ip++){
                if(dis[*ip]>0){
                    sum+=dis[*ip];
                    cnt++;
                }
            }
        }
        double kc=sum,kl=cnt;
        double kf=kc/cnt;
        printf("Case %d: average length between pages = %.3lf clicks\n",++c,kf);
        for(set<int>::iterator it=s.begin();it!=s.end();it++)ed[*it].clear();
        s.clear();
    }
}
