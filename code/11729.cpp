#include<bits/stdc++.h>
using namespace std;
struct node{
    int u,v;
};
vector<node>v;
bool com(node a,node b){return a.v>b.v;}
int main(){
    int n,c=0;
    while(scanf("%d",&n) && n){
        for(int i=0;i<n;i++){
            node nd;
            scanf("%d%d",&nd.u,&nd.v);
            v.push_back(nd);
        }
        sort(v.begin(),v.end(),com);
        int ans=0,tmp=0;
        for(int i=0;i<n;i++){
            tmp+=v[i].u;
            ans=max(ans,tmp+v[i].v);
        }
        v.clear();
        printf("Case %d: %d\n",++c,ans);
    }
}
