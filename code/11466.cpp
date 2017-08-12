#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bitset<10000001>p;
vector<ll>v;
void sieve(){
    v.push_back(2);
    for(ll i=3;i<=sqrt(10000001);i+=2){
        if(p[i]==0){
            for(ll j=i*i;j<=10000001;j+=(i*2)){
                p[j]=1;
            }
        }
    }
    for(ll i=3;i<=10000001;i+=2){
        if(p[i]==0) v.push_back(i);
    }
}
int main(){
    sieve();
    ll n,x;
    while(cin>>n and n!=0){
        int c=0;
        ll sum=-1;
        for (int i= 0; v[i]<=n and i<v.size(); i++) {
            while (n%v[i] == 0){
                n/= v[i];
                sum = v[i];
            }
            if (sum==v[i]){
                c++;
            }
        }
        if(n!=1 and sum!=-1)
            sum=n;
        else if(c==1) sum=-1;
       cout<<sum<<endl;
    }
}
