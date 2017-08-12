#include<bits/stdc++.h>
using namespace std;
int tree[100*3];
int a[100];
void inti(int node,int i,int j)
{
    if(i==j){
        tree[node]=a[i];
        return;
    }
    int mid=(i+j)/2;
    int left=node*2;
    int right=node*2+1;
    inti(left,i,mid);
    inti(right,mid+1,j);
    tree[node]=tree[left]+tree[right];
}
int qurey(int node,int i,int j,int b,int e)
{
    if(i>e || j<b) return 0;
    if(i>=b && j<=e) return tree[node];
    int mid=(b+e)/2;
    int left=node*2;
    int right=node*2+1;
    int p1=qurey(left,i,j,b,mid);
    int p2=qurey(right,i,j,mid+1,e);
    return p1+p2;
}
void update(int node,int b,int e,int i,int newvalue){
    if(i>e || i<b) return;
    if(b>=i && e<=i )
    {
        tree[node]=newvalue;
        return;
    }
    int mid=(b+e)/2;
    int left=node*2;
    int right=node*2+1;
    update(left,b,mid,i,newvalue);
    update(right,mid+1,e,i,newvalue);
    tree[node]=tree[left]+tree[right];
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    inti(1,1,n);
    cout<<qurey(1,1,n,2,5)<<endl;
}
