#include<bits/stdc++.h>
using namespace std;
const int N=200100;
typedef long long int ll;
struct node{
    int u,v;
    ll w;
    bool operator<(const node& p)const{
        return w<p.w;
    }
};
int pr[N];
vector<node>v;
int _find(int r){
    if(r==pr[r])return r;
    pr[r]=_find(pr[r]);
    return pr[r];
}
ll mst(int n){
    sort(v.begin(),v.end());
    for(int i=0;i<=n;i++)pr[i]=i;
    int cnt=0;
    ll sum=0;
    for(int i=0;i<v.size();i++){
        int uu=_find(v[i].u);
        int vv=_find(v[i].v);
        if(uu!=vv){
            pr[uu]=vv;
            cnt++;
            sum+=v[i].w;
            if(cnt==n-1)break;
        }
    }
    return sum;
}
int main(){
    int n,m;
    while(scanf("%d%d",&n,&m) &&(n && m)){
        ll sum=0;
        while(m--){
            node nd;
            scanf("%d%d %lld",&nd.u,&nd.v,&nd.w);
            sum+=nd.w;
            v.push_back(nd);
        }
        printf("%lld\n",sum-mst(n));
        for(int i=0;i<=n;i++)pr[i]=i;
        v.clear();
    }
}
