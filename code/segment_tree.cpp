#include<bits/stdc++.h>
using namespace std;
const int N=100;
struct node{
    int sum,prop;
} T[N*3];
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
int query(int n,int b,int e,int i,int j,int carry){
    if(i>e || j<b)return 0;
    if(b>=i && j>=e)return T[n].sum+carry*(e-b+1);
    return query(n*2,b,(b+e)/2,i,j,carry+T[n].prop)+query(n*2+1,(b+e)/2+1,e,i,j,carry+T[n].prop);
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        update(1,1,n,i,x);
    }
    for(int i=0;i<=100;i++)T[i].prop=0;
    cout<<query(1,1,n,2,4,0)<<endl;
    lazy_update(1,1,n,2,4,2);
    cout<<query(1,1,n,2,4,0)<<endl;

}
