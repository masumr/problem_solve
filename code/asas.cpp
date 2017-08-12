#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    while(cin>>n){
        ll ans=(n*(n+1)*n*(n+1))/4;
        cout<<ans<<endl;
    }
}
