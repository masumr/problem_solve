#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
int main(){
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(n!=n/i)v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<endl;
    //for(int i=0;i<v.size();i++)cout<<v[i]<<' ';
}
/*1 2 4 5 8 10 11 20 22 23 40 44 46 55 88 92 110 115 184 220 230 253 440 460 506 920 1012 1265 2024 2530 5060 /1 2 4 5 8 10 11 20 22 23 40 44 46 55 88 92 115 184 253 440 920 1265 2024 2530 5060*/
