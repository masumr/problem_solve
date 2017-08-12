#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>v;
void NOD(ll n){
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(i!=n/i)v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
}
ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        NOD(n);
        ll count=0;
        //cout<<n<<endl;
        for(ll i=0;i<v.size();i++){
            for(ll j=i;j<v.size();j++){
                if(lcm(v[i],v[j])==n)count++;
            }
        }
        printf("Case %d: %lld\n",++c,count);
        v.clear();
    }
}
