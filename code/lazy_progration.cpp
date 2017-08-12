#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int mx=100;
struct node{
    ll sum,prop;
}T[mx];
void update_t(int n,int b,int e,int i,int nv){
    if(i<b || i>e)return;
    if(b==e){
        T[n].sum=nv;
        return;
        T[n].prop=0;
    }
    update_t(n*2,b,(b+e)/2,i,nv);
    update_t(n*2+1,(b+e)/2+1,e,i,nv);
    T[n].sum=T[n*2].sum+T[n*2+1].sum;
    T[n].prop=0;
}
void update(int n,int b,int e,int i,int j,int nv){
    if(i>e|| j<b)return;
    if(i<=b && e<=j){
        T[n].sum=(e-b+1)*nv;
        T[n].prop+=nv;
        return;
        }
    update(n*2,b,(b+e)/2,i,j,nv);
    update(n*2+1,(b+e)/2+1,e,i,j,nv);
    T[n].sum=T[n*2].sum+T[n*2+1].sum+(e-b+1)*T[n].prop;
}
int query(int n,int b,int e,int i,int j,int carry){
    if(i>e || j<b)return 0;
    if(i<=b && e<=j)return T[n].sum+(e-b+1)*carry;
    return (query(n*2,b,(b+e)/2,i,j,carry+T[n].prop)+query(n*2+1,(b+e)/2+1,e,i,j,carry+T[n].prop));
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        update_t(1,1,n,i,x);
    }
    cout<<query(1,2,3,1,n,0)<<endl;
    update(1,2,4,1,n,3);
    cout<<query(1,2,3,1,n,0)<<endl;
}
