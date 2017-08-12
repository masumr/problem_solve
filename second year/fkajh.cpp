#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    ll ans=min(n,k)*a;
    cout<<ans+(b*max((ll)0,(n-k)))<<endl;
}
