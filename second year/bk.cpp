#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<ll,int>mp;
int main(){
    ll b1,q,l,m;
    cin>>b1>>q>>l>>m;
    while(m--){
        ll x;
        cin>>x;
        if(abs(x)<=l)mp[x]=1;
    }
    ll cnt=0;
    ll bk=b1;
    ll sum=b1;
    if(!mp[sum] && abs(sum)<=l)cnt++;
    while(abs(sum)<=l){
        sum=b1*q;
        if(sum==bk){
            if(mp[sum])cout<<<<endl;
            else cout<<"inf"<<endl;
            return 0;
        }
        else if(abs(sum)==abs(bk)){
            if(mp[sum] && mp[bk]){
                cout<<0<<endl;
            }
            else cout<<"inf"<<endl;
            return 0;
        }
        else{
             if(!mp[sum] && abs(sum)<=l)cnt++;
        }
        bk=b1;
        b1=sum;
    }
    cout<<cnt<<endl;
}
