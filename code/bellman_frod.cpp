#include<bits/stdc++.h>
using namespace std;
const int N=2003;
int inf=123456;
vector<pair<int,int> >v[N];
int dis[N];
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
            scanf("%d%d%d",&x,&y,&z);
            v[x].push_back(make_pair(y,z));
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<v[j].size();k++){
                    pair<int,int>x=v[j][k];
                    dis[x.first]=min(dis[x.first],dis[j]+x.second);
                }
            }
        }
        bool ck=0;
        for(int j=0;j<n;j++){
            for(int k=0;k<v[j].size();k++){
                pair<int,int>x=v[j][k];
                if(dis[x.first]<dis[j]+x.second){
                    ck=1;
                    break;
                }
            }
            if(ck)break;
        }
        if(!ck)printf("not possible\n");
        else printf("possible\n");
        for(int i=0;i<n;i++)v[i].clear();
    }
}
