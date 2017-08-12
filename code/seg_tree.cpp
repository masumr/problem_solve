#include<bits/stdc++.h>
using namespace std;
const int N=123456;
int arr[N],T[N*4];
void update(int n,int b,int e,int i,int nv){
    if(i>e || i<b)return;
    if(b==e){
        T[n]=nv;
        return;
    }
    int l=n*2,r=n*2+1;
    int m=(b+e)/2;
    update(l,b,m,i,nv);
    update(r,m+1,e,i,nv);
    T[n]=T[l]+T[r];
}
int query(int n,int b,int e,int i,int j){
    if(b>j || i>e)return 0;
    if(i<=b && j>=e)return T[n];
    return query(n*2,b,(b+e)/2,i,j)+query(n*2+1,(b+e)/2+1,e,i,j);
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        update(1,1,n,i,x);
    }
    int q;
    cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        cout<<query(1,1,n,x,y)<<endl;
    }
}
