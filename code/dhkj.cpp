#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll slove(ll n){
    ll count=0;
    while(n>0){
        n/=5;
        count+=n;
    }
    return count;
}
ll binary_searc(ll n,ll l,ll r){
    if(l==r) return l;
    ll mid=(l+r)/2;
    if(slove(mid)<n) return binary_searc(n,mid+1,r);
    else if(slove(mid)>n)return binary_searc(n,l,mid);
    else return mid;
}
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        ll lo=4;
        ll hi=1000000000;
        ll n;
        cin>>n;
        printf("Case %d: ",++c);
        ll sum=binary_searc(n,lo,hi);
        if(slove(sum)==n)cout<<sum-sum%5<<endl;
        else cout<<"impossible"<<endl;
    }
}
