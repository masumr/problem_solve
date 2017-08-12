#include<bits/stdc++.h>
using namespace std;
const int size=10007;
int a[size];
int binary_search(int lo,int hi,int n){
    if(lo>=hi)return lo;
    int mid=(lo+hi)/2;
    if(a[mid]>=n)return binary_search(lo,mid-1,n);
    else return binary_search(mid+1,hi,n);
}
int main(){
    int n,q;
    int t=0;
    while(scanf("%d%d",&n,&q)&&(n && q)){
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        sort(a,a+n);
        printf("CASE# %d:\n",++t);
        while(q--){
            int x;
            scanf("%d",&x);
            int t=binary_search(1,n-1,x);
            if(a[t]!=x)printf("%d not found\n",x);
            else printf("%d found at %d\n",x,t+1);
        }
    }
}

