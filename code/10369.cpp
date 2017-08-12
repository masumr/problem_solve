#include<bits/stdc++.h>
using namespace std;
typedef double dl;
struct node{
    int u,v;
    dl w;
    bool operator<(const node& p)const{
        return p.w>w;
    }
};
vector<node>v;
vector<pair<dl,dl> >v1;
int pr[550];
int _find(int r){
    if(r==pr[r])return r;
    return pr[r]=_find(pr[r]);
}
dl mst(int n){
    sort(v.begin(),v.end());
    //cout<<n<<endl;
    for(int i=1;i<=500;i++)pr[i]=i;
    for(int i=0;i<v.size();i++) cout<<v[i].w<<' ';cout<<endl;
    dl sum=0;
    int cnt=0;
    for(int i=0;i<v.size();i++){
        int uu=v[i].u;
        int vv=v[i].v;
        //cout<<v[i].u<<' '<<uu<<' '<<v[i].v<<' '<<vv<<endl;
        if(uu!=vv){
          // cout<<v[i].w<<endl;
            pr[vv]=uu;
            cnt++;
            sum=max(sum,v[i].w);
            if(cnt==n)return sum;
        }
    }
}
int main(){
    int  t;
    scanf("%d",&t);
    while(t--){
        int s,p;
        scanf("%d%d",&s,&p);
        for(int i=1;i<=p;i++){
            dl x,y;
            scanf("%lf%lf",&x,&y);
            v1.push_back(make_pair(x,y));
        }
        for(int i=0;i<v1.size();i++){
            for(int j=i+1;j<v1.size();j++){
                dl x1=v1[i].first;
                dl y1=v1[i].second;
                dl x2=v1[j].first;
                dl y2=v1[j].second;
                dl r=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
                node nd;
                nd.u=i+1;nd.v=j+1;nd.w=r;
                v.push_back(nd);
            }
        }
        //cout<<p<<' '<<s<<endl;
        printf("%.2lf\n",mst(p-s));
        v.clear();
    }
}
