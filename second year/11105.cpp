#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
const int N=1234567;
int a[N];
int inf=1000001;
int n;
int value(int k,int t){
    return k*t;
}
int binary_search1(int lo,int hi,int n){
    if(lo>=hi)return lo;
    int mid=(lo+hi)/2;
    if(a[mid]>=n)return binary_search1(lo,mid,n);
    else return binary_search1(mid+1,hi,n);
}
int binary_search2(int lo,int hi,int n,int tt){
    if(lo>=hi)return lo;
    int mid=(lo+hi)/2;
    //cout<<lo<<' '<<hi<<' '<<mid<<' '<<a[mid]*tt<<endl;
    if(a[mid]*tt>=n)return binary_search2(lo,mid,n,tt);
    else return binary_search2(mid+1,hi,n,tt);
}
int main(){
    int k=1;
    for(int i=5;i*i<=inf;i+=4)a[k++]=i;
    while(scanf("%d",&n) && n){
        int sum=0;
        int tt=binary_search1(1,k,n);
        while(a[tt]<n)tt--;
        cout<<tt<<endl;
    }
}
