#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,m,n;
        cin>>a>>m;
        ll x=a%m;
        n=sqrt(x);
        if(n*n!=x)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
