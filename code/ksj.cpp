#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int binary_search(ll lo,ll hi,ll n,ll count){
    if(lo>=hi)return count;
    ll mid=(lo+hi)/2;
    if(mid>=n)return binary_search(lo,mid,n,count+1);
    else return binary_search(mid+1,hi,n,count+1);
}
int main(){
    ll n,a;
    cin>>n>>a;
    ll lo=1,hi=n;
    cout<<binary_search(1,n,a,0)<<endl;
}
