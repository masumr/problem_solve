#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bitset<40001>p;
vector<int>v;
void sieve(){
    v.push_back(2);
    for(int i=4;i<=40001;i+=2) p[i]=1;
    for(int i=3;i<=sqrt(40001);i+=2){
        if(p[i]==0){
            for(int j=i*i;j<=40001;j+=(i*2)){
                p[j]=1;
            }
        }
    }
    for(int i=3;i<=40001;i+=2){
        if(p[i]==0) v.push_back(i);
    }
}
vector<int>phi(ll n){
    vector<int>a;
    for(int i=0;i<v.size() and v[i]<=n;i++){
        if(n%v[i]==0){
            a.push_back(v[i]);
            while(n%v[i]==0) n/=v[i];
        }
    }
    if(n>1) a.push_back(n);
    return a;
}
int main(){
    ll n;
    sieve();
    while(cin>>n and n!=0){
        vector<int>a=phi(n);
        ll sum=n;
        for(int i=0;i<a.size();i++){
            sum=(sum*(a[i]-1))/a[i];
        }
        cout<<sum<<endl;
    }
}
