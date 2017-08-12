#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=123456;
struct node{
    ll sum,prop;
}T[4*N];
struct nd{
    int u,v;
    ll w;
};
vector<nd>v;
void update(int n,int b,int e,int i,int nv){
    if(i>e || i<b)return;
    if(b==e){
        T[n].sum=nv;
        return;
    }
    update(n*2,b,(b+e)/2,i,nv);
    update(n*2+1,(b+e)/2+1,e,i,nv);
    T[n].sum=T[n*2].sum+T[n*2+1].sum;
}
void lazy_update(int n,int b,int e,int i,int j,int nv){
    if(i>e || j<b)return;
    if(i<=b && j>=e){
        T[n].sum+=(e-b+1)*nv;
        T[n].prop+=nv;
        return;
    }
    lazy_update(n*2,b,(b+e)/2,i,j,nv);
    lazy_update(n*2+1,(b+e)/2+1,e,i,j,nv);
    T[n].sum=T[n*2].sum+T[n*2+1].sum+(e-b+1)*T[n].prop;

}
ll query(int n,int b,int e,int i,int j,int carry){
    if(i>e || j<b)return 0;
    if(i<=b && j>=e){
        return T[n].sum+carry*(e-b+1);
    }
    return query(n*2,b,(b+e)/2,i,j,carry+T[n].prop)+query(n*2+1,(b+e)/2+1,e,i,j,carry+T[n].prop);
}
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=4*n;i++){
        T[i].sum=0;
        T[i].prop=0;
    }
    for(int i=1;i<=n;i++){
        ll x;
        cin>>x;
        update(1,1,n,i,x);
    }
    while(m--){
       nd nn;
        cin>>nn.u>>nn.v>>nn.w;
        v.push_back(nn);
    }
    while(k--){
        int x,y;
        cin>>x>>y;
        lazy_update(1,1,n,x,y,1);
    }
    for(int i=1;i<=n;i++){
        cout<<query(1,1,n,i,i,0)-1;
        if(i!=n)printf(" ");
    }
    printf("\n");
}
