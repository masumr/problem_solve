#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<ll,int>mp;
int main(){
    //ll xx=1000000000;
    //xx*=xx;
    //cout<<xx<<' '<<xx+11<<endl;
    ll b1,q,l,m;
    cin>>b1>>q>>l>>m;
    while(m--){
        ll x;
        cin>>x;
        mp[x]=1;
    }
    ll sum=b1;
    ll sk=b1;
    ll cnt=0;
    if(!mp[b1] && abs(b1)<=l)cnt++;
    while(abs(sum)<=l){
        sum=b1*q;
        b1=sum;
        if(b1==sk){
            if(mp[b1])cout<<cnt<<endl;
            else cout<<"inf"<<endl;
            return 0;
        }
        else if(abs(b1)==abs(sk)){
            if(mp[b1] && mp[sk]){
                cout<<cnt<<endl;
            }
            else cout<<"inf"<<endl;
            return 0;
        }
        else{
            if(!mp[sum] && abs(sum)<=l)cnt++;
        }
        sk=b1;
    }
    cout<<cnt<<endl;
}
