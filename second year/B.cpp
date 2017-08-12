#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>v;
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    ll cnt=1;
    while(k--){
        ll x;
        scanf("%lld",&x);
        cnt+=x;
        cout<<cnt<<' ';
        cnt%=n;
        v.push_back(cnt);
        cnt=x+2;
    }
    cout<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i]<<' ';
    cout<<endl;
}
