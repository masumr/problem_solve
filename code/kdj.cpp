#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mn=12345678912345678;
vector<ll>v;
int main(){
    ll n,k;
    cin>>n>>k;
    //if(n<k){cout<<-1<<endl;return 0;}
    ll c1=0,c2=0;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
           v.push_back(i);
           if(i!=n/i)v.push_back(n/i);

        }
    }
    sort(v.begin(),v.end());
    if(v.size()<k)cout<<-1<<endl;
    else cout<<v[k-1]<<endl;
}
