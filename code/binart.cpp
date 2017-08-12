#include<bits/stdc++.h>
using namespace std;
const int N=2e5+7;
typedef long long int ll;
ll a[N];
ll n,k,s,t;
vector<pair<ll,ll> >v;
bool com(pair<ll,ll>a,pair<ll,ll>b){
    if(a.first<b.first)return true;
    else if(a.first==b.first){
        if(a.second<b.second)return true;
        else return false;
    }
    else return false;
}
ll fun(int i){
    ll tt=0;
    ll v1=v[i].first,v2=v[i].second;
    for(int i=0;i<=k;i++){
        ll len=a[i+1]-a[i];
        cout<<a[i]<<' '<<a[i+1]<<' '<<len<<endl;
        ll lo=0,hi=len/2;
        if(len%2)hi++;
        if(v2*2<len)return 1234567891;
        int pk=hi;
        while(1){
            if(lo>=hi)break;;
            ll mid=(lo+hi)/2;
            ll sum=(mid*2)+(len-(mid*2));
            if(sum<=v2)hi=mid;
            else lo=mid+1;
        }
        ll l1=(lo+(len-lo*2)*2);
        lo--;
        ll l2=(lo+(len-lo*2)*2);
        if(min(l1,l2)>v1)return
        tt+=min(l1,l2);
    }
    cout<<t<<endl;
    return tt;
}
int main(){
    cin>>n>>k>>s>>t;
    while(n--){
        ll x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    a[0]=0;
    for(int i=1;i<=k;i++)cin>>a[i];
    a[k+1]=s;
    sort(a,a+k+2);
    sort(v.begin(),v.end(),com);
    for(int i=0;i<v.size()-1;i++){
        if(v[i].second>=v[i+1].second){
            v.erase(v.begin()+i+1);
            i--;
        }
    }
    int lo=0,hi=v.size()-1;
    bool ck=0;
    if(fun(hi-1)>t){
        cout<<-1<<endl;
        return 0;
    }
    while(1){
        if(lo>=hi)break;
        int mid=(lo+hi)/2;
        cout<<v[mid].first<<' '<<v[mid].second<<' '<<fun(mid)<<' '<<"mas"<<endl;
        if(fun(mid)<=t)hi=mid;
        else lo=mid+1;
    }
    ll val;
    //cout<<lo<<' '<<fun(lo)<<' '<<fun(lo-1)<<endl;
    if(fun(lo)<fun(lo-1) || fun(lo-1)==1234567891){
        val=lo;
    }else val=lo+1;
    cout<<v[val].first<<endl;
}
