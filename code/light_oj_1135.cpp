#include<bits/stdc++.h>
using namespace std;
const int N=123456;
struct node{
    int sum,prop;
}T[4*N];
void lazy_update(int n,int b,int e,int i,int j){
    if(b>j || e<i)return;
    if(b>=i && e<=j){
        T[n].sum+=(e-b+1);
        T[n].prop+=1;
        return;
    }
    lazy_update(n*2,b,(b+e)/2,i,j);
    lazy_update(n*2+1,(b+e)/2+1,e,i,j);
    T[n]=T[n*2]+T[n*2+1]+(e-b+1)*T[n].prop;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d",&n,&m);
        for(int i=0;i<=4*n;i++){
            T[i].sum=0;
            T[i].prop=0;
        }
        while(m--){
            int x;
            scanf("%d",&x);
            if(x==0){
                int x,y;
                scanf("%d%d",&x,&y);
                lazy_update(1,0,n-1,x,y,1);
            }
        }
    }
}
