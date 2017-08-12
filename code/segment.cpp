#include<bits/stdc++.h>
using namespace std;
int tree[100];
int a[100];
void init(int node,int n,int e)
{
    if(n==e)
    {
        tree[node]==a[n];
        return;
    }
    int mid=(n+e)/2;
    init(node*2,n,mid);
    init(node*2+1,mid+1,e);
    tree[node]=tree[node*2]+tree[node*2+1];
}
int qurey()
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    init(1,1,n);
    cout<<tree[1]<<endl;
}
