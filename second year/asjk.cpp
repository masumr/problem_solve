#include<bits/stdc++.h>
using namespace std;
const int N=123456;
typedef long long int ll;
vector<ll>v;
vector<pair<ll,ll> >vv,vc;
map<ll,multiset<ll> >mp;
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        ll k;
        int n;
        scanf("%d%lld",&n,&k);
        for(int i=0;i<n;i++){
            ll x;
            scanf("%lld",&x);
            mp[x%k].insert(x);
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        bool ck=0;
        printf("Case %d:\n",++c);
        for(int i=0;i<v.size();i++){
            int dif=k-(v[i]%k);
            if(mp[dif].size()){
                ck=1;
                multiset<ll>::iterator it=mp[dif].begin();
                cout<<v[i]<<' '<<(*it)<<endl;
                mp[dif].erase(*it);
                it=mp[v[i]%k].begin();
                mp[v[i]%k].erase(*it);
            }
            else{
                multiset<ll>::iterator it=mp[v[i]%k].begin();
                mp[v[i]%k].erase(*it);
            }
        }
        if(!ck)cout<<"Not Possible"<<endl;
        mp.clear();v.clear();
        //cout<<mp[3].size()<<endl;
    }
}
