#include<bits/stdc++.h>
using namespace std;
const int N=101;
int T[N*3];
int a[N];
void update(int n,int b,int e,int i,int nv){
    if(i<b || i>e)return;
    if(b==e){
        T[n]=nv;
        return;
    }
    update(n*2,b,(b+e)/2,i,nv);
    update(n*2+1,(b+e)/2+1,e,i,nv);
    T[n]=T[n*2]+T[n*2+1];
}
int query(int n,int b,int e,int i,int j){
    if(i>e || j<b)return 0;
    if(i<=b && j>=e)return T[n];
    return (query(n*2,b,(b+e)/2,i,j)+query(n*2+1,(b+e)/2+1,e,i,j));
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        update(1,1,n,i,a[i]);
    }
    cout<<query(1,1,n,2,4)<<endl;
    update(1,1,n,3,5);
    cout<<query(1,1,n,2,4)<<endl;
}
