#include<bits/stdc++.h>
using namespace std;
const int N=2003;
int inf=123456;
struct node{
    int u,v,w;
};
int dis[N];
vector<node>v;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++)dis[i]=inf;
        dis[0]=1;
        for(int i=0;i<m;i++){
            int x,y,z;
            node nd;
            scanf("%d%d%d",&nd.u,&nd.v,&nd.w);
            v.push_back(nd);
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m;j++){
                node nd=v[j];
                if(dis[nd.u]!=0){
                    if(dis[nd.u]+nd.w<dis[nd.v]){
                        dis[nd.v]=dis[nd.u]+nd.w;
                    }
                }
            }
        }
        bool ck=0;
        for(int i=0;i<3;i++){
        for(int j=0;j<m;j++){
             node nd=v[j];
                if(dis[nd.u]!=inf){
                    if(dis[nd.u]+nd.w<dis[nd.v]){
                        ck=1;
                        break;
                    }
                }
        }
        }
        if(ck)printf("possible\n");
        else printf("not possible\n");
        v.clear();
    }
}
