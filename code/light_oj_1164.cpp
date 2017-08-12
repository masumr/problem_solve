#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=123456;
struct node{
    ll sum,prop;
}T[N*4];
void lazy_update(int n,int b,int e,int i,int j,ll nv){
    if(b>j || e<i)return;
    if(b>=i && j>=e ){
        T[n].sum+=(e-b+1)*nv;
        T[n].prop+=nv;
        return;
    }
    lazy_update(n*2,b,(b+e)/2,i,j,nv);
    lazy_update(n*2+1,(b+e)/2+1,e,i,j,nv);
    T[n].sum=T[n*2].sum+T[n*2+1].sum+(e-b+1)*T[n].prop;
}
ll query(int n,int b,int e,int i,int j,ll carry){
    if(i>e || j<b)return 0;
    if(b>=i && j>=e)return T[n].sum+carry*(e-b+1);
    return query(n*2,b,(b+e)/2,i,j,carry+T[n].prop)+query(n*2+1,(b+e)/2+1,e,i,j,carry+T[n].prop);
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=0;i<=4*n;i++){
            T[i].sum=0;
            T[i].prop=0;
        }
        printf("Case %d:\n",++c);
        while(m--){
            int x;
            scanf("%d",&x);
            if(x==0){
                int a,b;
                ll cc;
                scanf("%d%d %lld",&a,&b,&cc);
                lazy_update(1,0,n-1,a,b,cc);
            }
            else{
                int a,b;
                scanf("%d%d",&a,&b);
                printf("%lld\n",query(1,0,n-1,a,b,0));
            }
        }
    }
}
