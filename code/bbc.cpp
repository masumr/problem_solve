#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>v;
int main(){
    int n;
    cin>>n;
    ll mk=-12345689;
    int cnt1=0,cnt2=0;
    ll sum=0;
    while(n--){
        ll x;
        cin>>x;
        if(x>0){
            if(x%2){
                v.push_back(x);
            }
            else{
                sum+=x;
            }
        }
        else{
            if(x%2)mk=max(mk,x);
        }
    }
    if(v.size()==0){
        if(sum%2==0)sum+=mk;
    }
    else if(v.size()%2){
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }
    }
    else{
        sort(v.begin(),v.end());
        ll sk=sum;
        for(int i=0;i<v.size();i++)sk+=v[i];
        sum=max(sk-v[0],sk+mk);
    }
    cout<<sum<<endl;
}
