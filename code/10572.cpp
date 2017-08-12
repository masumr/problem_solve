#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
set<ll>s;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x,m;
        cin>>n;
        m=n;
        while(n--){
            cin>>x;
            if(m>x)s.insert(x);
        }
        cout<<s.size()<<endl;
        s.clear();
    }
}
