#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,m;
    cin>>n>>m;
    ll l=0,h=2123456789;
    if(n<=m){
        cout<<n<<endl;
        return 0;
    }
    while(l<h){
        ll mid=(l+h)/2;
        if((mid*(mid+1))/2>=n-m)h=mid;
        else l=mid+1;
    }
    cout<<l+m<<endl;
}
