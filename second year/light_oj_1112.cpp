#include<bits/stdc++.h>
using namespace std;
const int N=123456;
int T[N*4];
int a[N];
void update(int n,int b,int e,int i,int nv){
    if(i>e || i<b)return;
    if(b==e){
        T[n]=nv;
        return;
    }
    update(n*2,b,(b+e)/2,i,nv);
    update(n*2+1,(b+e)/2+1,e,i,nv);
    T[n]=T[n*2]+T[n*2+1];
}
int query(int n,int b,int e,int i,int j){
    if(b>j || e<i)return 0;
    if(i<=b && j>=e){
        return T[n];
    }
    return query(n*2,b,(b+e)/2,i,j)+query(n*2+1,(b+e)/2+1,e,i,j);
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            update(1,0,n-1,i,a[i]);
        }
        printf("Case %d:\n",++c);
        while(m--){
            int q;
            scanf("%d",&q);
            if(q==1){
                int x;
                scanf("%d",&x);
                printf("%d\n",query(1,0,n-1,x,x));
                update(1,0,n-1,x,0);
            }
            else if(q==2){
                int x,y;
                scanf("%d%d",&x,&y);
                int qq=query(1,0,n-1,x,x);
                update(1,0,n-1,x,y+qq);
            }
            else {
                int x,y;
                scanf("%d%d",&x,&y);
                printf("%d\n",query(1,0,n-1,x,y));
            }
        }
    }
}
