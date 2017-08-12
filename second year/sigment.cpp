#include<bits/stdc++.h>
using namespace std;
const int size=10001;
int in=10000000;
int tree[size*4];
void update(int node,int i,int j,int pos,int nv){
    if(i>pos &&  j<pos) return;
    if(i==pos || j==pos) tree[node]=nv;
    else{
        update(node*2,i,(i+j)/2,pos,nv);
        update((node*2)+1,((i+j)/2)+1,j,pos,nv);
        tree[node]=min(tree[node*2],tree[node*2+1]);
    }
}
int qury(int node,int i,int j,int b,int e){
    if(i>e || j<b) return in;
    if(i>=b && j<=e) return tree[node];
    return min(qury((node*2),i,((i+j)/2),b,e),qury((node*2+1),(i+j)/2+1,j,b,e));
}
int main(){
    int t,c=0;
    cin>>t;
    getchar();
    while(t--){
        int n,m;
        printf("Case %d:\n",++c);
        cin>>n>>m;
        for(int i=0;i<n;++i){
            int s;
            cin>>s;
            update(1,0,n-1,i,s);
        }
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            cout<<qury(1,0,n-1,--x,--y)<<endl;
        }
    }
}
