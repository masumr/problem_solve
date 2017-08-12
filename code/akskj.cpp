#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>v;
bool ck(ll n){
    for(int i=0;i<v.size() && v[i]<=n;i++){
        //cout<<i<<' '<<k<<' '<<a[i]<<endl;
        if(n%v[i]==0)return true;
    }
    return false;
}
int main(){
    ll n;
    //cout<<ck(12)<<endl;
    cin>>n;
    ll mx=0;
    if(n<=3)cout<<n<<endl;
    else{
        //ll x=sqrt(n);
        //ll a[x+5];
        //k=0;
        //cout<<n<<endl;
        for(ll i=2;i*i<=n;i++){
            v.push_back(i*i);
            //cout<<k<<endl;
        }
        //for(int i=0;i<k;i++)cout<<a[i]<<' ';
        //cout<<k<<endl;
        for(ll i=1;i*i<=n;i++){
            if(n%i==0){
                if(ck(i)==false){
                    mx=max(mx,i);
                }
                if(i!=n/i){
                    if(ck(n/i)==false){
                        mx=max(mx,n/i);
                    }
                }
            }
        }
        cout<<mx<<endl;
    }
}
