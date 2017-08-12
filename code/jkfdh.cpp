#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        n=(n*2)*(n*2);
        m*=m;
        printf("Case %d: %lld\n",++c,n-m);
    }
}
