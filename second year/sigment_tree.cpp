#include<bits/stdc++.h>
using namespace std;
const int N=123;
int a[N];
int t[N+3];
void inti(int n,int b,int e){
    if(b==e){
        t[n]=a[b];
        return;
    }
    int l=n*2;
    int r=n*2+1;
    int m=(b+e)/2;
    inti(n,b,m);
    inti(n,m+1,e);
    t[n]=t[l]+t[r];
}
int query(int n,int b,int e,int i,int j){
    if(i>e || j<b)return 0;
    if(b>=i && e<=j)return t[n];
    int l=n*2;
    int r=n*2+1;
    int m=(b+e)/2;
    int p1=query(l,b,m,i,j);
    int p2=query(r,m+1,e,i,j);
    return p1+p2;
}
void update(int n,int b,int e,int i,int nv){
    if(i>e || i<b)return;
    if(b>=i && e<=i){
        t[n]=nv;
        return;
    }
    int l=n*2;
    int r=n*2+1;
    int m=(b+e)/2;
    update(l,b,m,i,nv);
    update(r,m+1,e,i,nv);
    t[n]=t[l]+t[r];
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    inti(1,1,n);
    cout<<query(1,1,n,2,3)<<endl;
    //update(1,1,n,2,2);
    //inti(1,1,n);
    //cout<<query(1,1,n,2,5)<<endl;
}
