#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<ll,ll>mp;
vector<ll>v;
int main(){
    ll num;
    while(scanf("%lld",&num)==1){
        if(mp[num]==0)v.push_back(num);
        mp[num]++;
    }
    for(int i=0; i<v.size(); i++) printf("%lld %lld\n",v[i],mp[v[i]]);
    v.clear();
    mp.clear();

}

