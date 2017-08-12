#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll rec(ll b,ll n){
    if(n<b) return n;
    else
    return rec(b,floor(n/b))+(n%b);
}
int main(){
        ll n,s;
        cin>>n>>s;
        ll ans=rec(s,n);
        if(!ans) cout<<-1<<endl;
        else cout<<ans<<endl;
}
