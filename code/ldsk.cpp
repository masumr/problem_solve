#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll cnt(ll n,ll k){
    if(k>n)return 0;
    if(n==k)return 1;
    return cnt(n,k+1)+cnt(n-k,k);
}
int main(){
    int n,k;
    while(cin>>n>>k)cout<<cnt(n,k)<<endl;
}
