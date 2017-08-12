#include<bits/stdc++.h>
using namespace std;
int arr[100];
int tree[100*3];
void inti(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return;
    }
    int mid=(b+e)/2;
    int r=node*2+1;
    int l=node*2;
    inti(l,b,mid);
    inti(r,mid+1,e);
    tree[node]=tree[l]+tree[r];
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    inti(1,1,n);
    cout<<tree[n]<<endl;
}
