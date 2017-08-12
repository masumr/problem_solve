#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n;
    cin>>n;
    vector<ll>v;
    map<ll,ll>mp;
    while(n--){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll x1=v[0];
    ll y1=v[(v.size()-1)];
    for(int i=0;i<v.size();i++){
        if(x1==v[i])mp[x1]++;
        else if(y1==v[i])mp[y1]++;
    }
    ll sum=0;
    //cout<<mp[x1]<<' '<<mp[y1]<<endl;
    if(x1==y1){
        sum=((mp[x1]*(mp[x1]-1))/2);
    }
    else sum=mp[x1]*mp[y1];
    cout<<y1-x1<<' '<<sum<<endl;
}
