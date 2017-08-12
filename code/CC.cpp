#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
typedef double dl;
dl p;
int n;
vector<pair<dl,dl> >v;
dl value(dl s,dl og,dl t){
    return s-(og*t);
}
bool cheack(dl t){
    //cout<<t<<' ';
    int cnt=0;
    dl mx=12212122121;
    int id=0;
    vector<dl>vc;
    for(int i=0;i<v.size();i++){
        dl val=value(v[i].second,v[i].first,t);
        vc.push_back(val);
        if(mx>val){
            mx=val;
            id=i;
        }
    }
    vc[id]=mx+(p*t);
    bool ck=0;
    for(int i=0;i<vc.size();i++){
        //cout<<vc[i]<<' ';
        if(vc[i]<0.00001){
            ck=1;
            break;
        }
    }
    cout<<t<<' '<<ck<<endl;
    vc.clear();
    if(ck)return false;
    else return true;
}
ll binary_search1(ll lo,ll hi){
    //if(co==10)return 0;
    //cout<<lo<<' '<<hi<<' '<<abs(lo-hi)<<' ';
    //cout<<lo<<' '<<hi<<' ';;
    if(lo>=hi)return lo;
    ll mid=(lo+hi)/2;
    //cout<<cheack(mid)<<' '<<mid<<endl;
    if(!cheack(mid))return binary_search1(lo,mid);
    else return binary_search1(mid+1,hi);
}
dl binary_search2(dl lo,dl hi){
    cout<<lo<<' '<<hi<<' ';
    if(abs(lo-hi)<.0001)return hi;
    dl mid=(lo+hi)/2;
    cout<<mid<<endl;
    //cout<<cheack(mid)<<' '<<mid<<endl;
    if(!cheack(mid))return binary_search1(lo,mid);
    else return binary_search1(mid+1,hi);
}
int main(){
    cin>>n>>p;
    for(int i=0;i<n;i++){
        dl x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    if(v.size()==0){
        cout<<-1<<endl;
        return 0;
    }
    dl hi=1200000000000000000;
    ll tt=binary_search1(0,hi);
    dl vl=tt;
    //cout<<cheack(2.0)<<endl;
    vl=binary_search2(vl-1,vl);
    cout<<vl<<endl;
}
