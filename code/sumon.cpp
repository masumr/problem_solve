#include<bits/stdc++.h>
using namespace std;
struct node{
    int u,v,w;
    bool operator<(const node& p)const{
        return w<p.w;
    }
};
const int N=1234;
int pr[N];
vector<node>v;
int _find(int r){return (pr[r]==r)?r:_find(pr[r]);}
int mst(int n){
    sort(v.begin(),v.end());
    for(int i=1;i<=n;i++)pr[i]=i;
    int count=0,s=0;
    for(int i=0;i<v.size();i++){
        int uu=_find(v[i].u);
        int vv=_find(v[i].v);
        if(uu!=vv){
            pr[u]=v;
            count++;
            s+=v[i].w;
            if(count==n-1)break;
        }
    }
    return s;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        node nd;
        nd.u=u;nd.v=v;nd.w=w;
        v.push_back(nd);
    }
    cout<<<mst(n)<<endl;
}
