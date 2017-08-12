#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,k;
    cin>>n>>k;
    ll x=n/2;
    vector<ll>v;
    map<ll,int>mp;
    if(x>k || n==1){
        if(n==1){
            if(k==0)cout<<1<<endl;
            else cout<<-1<<endl;
        }
        else
        cout<<-1<<endl;
    }
    else{
        ll sum=(k-x)+1;
        if(sum!=0){
            v.push_back(sum);
            v.push_back(sum*2);
            mp[sum]=1;
            mp[sum*2]=1;
            n-=2;
        }
        int j=1;
        for(int i=1;j<=n;i++){
            if(mp[i]!=1){
                v.push_back(i);
                mp[i]=1;
                j++;
            }
        }
        for(int i=0;i<v.size();i++)cout<<v[i]<<' ';
        cout<<endl;
    }
}
