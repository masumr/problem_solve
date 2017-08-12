#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=123456;
ll a[N];
set<ll>s;
vector<ll>v;
int main(){
    int n;
    cin>>n;
    ll sum=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>a[i];
        s.insert(a[i]);
    }
    bool ck=0,cc=0;
    for(set<ll>::iterator it=s.begin();it!=s.end();it++){
        v.push_back(*it);
    }
    int dif=v[1]-v[0];
    for(int i=2;i<v.size();i++){
        if(dif!=abs(v[i]-v[1])){
            ck=1;

            break;
        }
    }
    if(!ck)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
