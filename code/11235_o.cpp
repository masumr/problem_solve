#include<bits/stdc++.h>
using namespace std;
const int INF=10000000;
const int size=100001;
int tree[size*4];
int a[size];
void update(int node,int i,int j,int id,int nv){
    if(i>id || j<id || i>j) return;
    if(i==j) tree[node]=nv;
    else{
        update(node*2 , i, (i+j)/2 ,id , nv);
        update(node*2+1,(i+j)/2+1, j ,id , nv);
        tree[node]=max(tree[node*2],tree[node*2+1]);
    }
}
int qurey(int node,int i,int j,int b,int e){
    if(i>e || j<b|| b>e ) return INT_MIN;
    if(i>=b && j<=e) return tree[node];
    return max(qurey(node*2,i,(i+j)/2,b,e),qurey(node*2+1,(i+j)/2+1,j,b,e));
}
int main(){
    int n,m;
    while(scanf("%d",&n) && n){
        scanf("%d",&m);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int cnt=1;
        update(1,0,n-1,1,1);
        for(int i=2;i<n;i++){
            if(a[i]==a[i-1]){
                cnt++;
                //len[i]=cnt;
                //cout<<i<<' '<<i-1<<' '<<cnt<<endl;
                update(1,0,n-1,i,cnt);
            }
            else{
                //cout<<endl;
                cnt=1;
                //len[i]=cnt;
                update(1,0,n-1,i,cnt);
            }
        }
        for(int i=0;i<m;i++){
            int x,y;
            scanf("%d%d",&x,&y);
            printf("%d\n",qurey(1,0,n-1,x-1,y-1));
        }
    }
}
