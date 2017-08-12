#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int size=1234567;
const int N=95359+100;
bitset<size>p;
vector<ll>v;
ll a[N];
void sieve(){
    for(int i=3;i*i<=size;i+=2)if(!p[i])for(int j=i*i;j<=size;j+=(i<<1))p[j]=1;
    v.push_back(2);
    for(int i=3;i<=size;i+=2)if(!p[i])v.push_back(i);
}
int binary_search(int lo,int hi,ll n){
    if(lo>=hi)return lo;
    int mid=(lo+hi)/2;
    if(a[mid]>=n)return binary_search(lo,mid,n);
    else return binary_search(mid+1,hi,n);
}
int main(){
    sieve();
    for(int i=0;i<v.size();i++){
        a[i]=v[i]*v[i];
    }
    int n;
    cin>>n;
    while(n--){
        ll x;
        cin>>x;
        int t=binary_search(0,v.size()-1,x);
        if(a[t]==x)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
