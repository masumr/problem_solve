#include<bits/stdc++.h>
using namespace std;
const int size=1000;
int null=0;
int tree[size*3];
void update(int node,int i,int j,int id,int nv){
    if(i>id || j<id) return;
    if(i==j) tree[node]=nv;
    else{
        update(node*2,i,(i+j)/2,id,nv);
        update(node*2+1,(i+j)/2+1,j,id,nv);
        tree[node]=max(tree[node*2],tree[node*2+1]);
    }
}
int maximum_value(int node,int i,int j,int b,int e){
    if(e<i || b>j || b>e) return null;
    if(i==j) return tree[node];
    return max(maximum_value(node*2,i,(i+j)/2,b,e),maximum_value(node*2+1,(i+j)/2+1,j,b,e));
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;++i){
        int s;
        cin>>s;
        update(1,0,n-1,i,s);
    }
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        cout<<maximum_value(1,0,n-1,--x,--y)<<endl;
    }
}
