#include<bits/stdc++.h>
using namespace std;
const int N=2000;
vector<pair<int,int> >ed[N];
int dis[N];
int inf=1234567;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++)dis[i]=inf;
        dis[0]=0;
        for(int i=0;i<m;i++){
            int u,v,w;
            scanf("%d%d%d",&u,&v,&w);
            ed[u].push_back(make_pair(v,w));
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<ed[j].size();k++){
                    pair<int,int>x=ed[j][k];
                    if(dis[j]!=inf){
                        dis[x.first]=min(dis[x.first],dis[j]+x.second);
                    }
                }
            }
        }
        bool ck=0;
        for(int j=0;j<n;j++){
            for(int k=0;k<ed[j].size();k++){
                if(dis[j]!=inf){
                    pair<int,int>x=ed[j][k];
                    if(dis[x.first]>dis[j]+x.second){
                        ck=1;
                        break;
                    }
                }
            }
            if(ck)break;
        }
        if(ck)printf("possible\n");
        else printf("not possible\n");
        for(int i=0;i<n;i++)ed[i].clear();
    }
}
