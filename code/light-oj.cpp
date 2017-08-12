#include<bits/stdc++.h>
using namespace std;
const int INF=10000000;
const int size=100001;
int tree[size*4];
void update(int node,int i,int j,int id,int nv){
    if(i>id || j<id || i>j) return;
    if(i==j) tree[node]=nv;
    else{
        update(node*2 , i, (i+j)/2 ,id , nv);
        update(node*2+1,(i+j)/2+1, j ,id , nv);
        tree[node]=min(tree[node*2],tree[node*2+1]);
    }
}
int qury(int node,int i,int j,int b,int e){
    if(i>e || j<b|| b>e ) return INF;
    if(i>=b && j<=e) return tree[node];
    return min(qury(node*2,i,(i+j)/2,b,e),qury(node*2+1,(i+j)/2+1,j,b,e));
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    getchar();
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        printf("Case %d:\n",++c);
        for(int i=0;i<n;++i){
            int s;
            scanf("%d",&s);
            update(1,0,n-1,i,s);
        }
        for(int i=0;i<m;i++){
            int x,y;
            scanf("%d%d",&x,&y);
            printf("%d\n",qury(1,0,n-1,--x,--y));
        }
    }
}
