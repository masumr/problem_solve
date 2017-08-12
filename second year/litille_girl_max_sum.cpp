#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=2123456;
struct node{
    ll sum,prop;
}T[N*4];
ll val[N],qq[N];
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
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=0;i<=4*n;i++){
            T[i].sum=0;
            T[i].prop=0;
        }
        for(int i=1;i<=n;i++)cin>>val[i];
        sort(val+1,val+n+1);
        while(m--){
            int a,b;
            scanf("%d%d",&a,&b);
            lazy_update(1,1,n,a,b,1);
            //cout<<1<<endl;
        }
        for(int i=1;i<=n;i++){
            qq[i]=query(1,1,n,i,i,0);
            //cout<<qq[i]<<' ';
        }
        sort(qq+1,qq+n+1);
        ll sum=0;
        for(int i=1;i<=n;i++){
            //cout<<qq[i]<<' '<<val[i]<<endl;
            sum+=(qq[i]*val[i]);
        }
        cout<<sum<<endl;
}
