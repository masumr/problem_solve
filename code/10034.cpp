#include<bits/stdc++.h>
using namespace std;
const int N=10000;
typedef double dl;
struct node{
    int u,v;
    dl w;
    bool operator<(const node& p){
        return w<p.w;
    }
};
int pr[N];
vector<pair<dl,dl> >p;
vector<node>v;
dl len(pair<dl,dl>x,pair<dl,dl>y){
    dl x1=x.first;dl y1=x.second;
    dl x2=y.first;dl y2=y.second;
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int _find(int r){
    if(r==pr[r])return r;
    pr[r]=_find(pr[r]);
    return pr[r];
}
dl mst(int n){
    sort(v.begin(),v.end());
    int cnt=0;
    dl sum=0;
    for(int i=0;i<v.size();i++){
        int uu=_find(v[i].u);
        int vv=_find(v[i].v);
        if(vv!=uu){
            pr[uu]=vv;
            cnt++;
            sum+=v[i].w;
            if(cnt==n-1)break;
        }
    }
    return sum;
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<N;i++)pr[i]=i;
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            dl x,y;
            scanf("%lf%lf",&x,&y);
            p.push_back(make_pair(x,y));
        }
        int cnt=1;
        for(int i=1;i<=n;i++){
            //cout<<len(p[i],p[i-1])<<endl;;
            for(int j=i+1;j<=n;j++){
                node nd;
                nd.u=i,nd.v=j;
                nd.w=len(p[i-1],p[j-1]);
                v.push_back(nd);
                cnt++;
            }
        }
        printf("%.2lf\n",mst(cnt));
        if(t)printf("\n");
        for(int i=1;i<=n;i++)pr[i]=i;
        v.clear();p.clear();
    }
}
