#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>v,v1;
map<ll,ll>mp;
bitset<32768>p;
void sieve(){
    for(int i=3;i*i<=32768;i+=2){
        if(!p[i]){
            for(int j=i*i;j<=32768;j+=(i*2))p[j]=1;
        }
    }
    v.push_back(2);
    for(int i=3;i<=32768;i+=2){
        if(!p[i])v.push_back(i);
    }
}
void pf(ll n){
    for(int i=0;i<v.size();i++){
        if(n%v[i]==0) v1.push_back(v[i]);
        while(n%v[i]==0){
            n/=v[i];
            mp[v[i]]++;
        }
        if(n==1) break;
    }
}
int main(){
    sieve();
    string s;
    while(getline(cin,s)){
        if(s=="0") break;
        stringstream ss(s);
        int p1,e1;
        ll sum=1;
        while(ss>>p1){
            ss>>e1;
            sum*=pow(p1,e1);
        }
        sum--;
        pf(sum);
        for(int i=v1.size()-1;i>=0;i--){
            cout<<v1[i]<<' '<<mp[v1[i]];
            if(i!=0)cout<<' ';
        }
        cout<<1<<endl;
        cout<<endl;
        mp.clear();v1.clear();
    }
}
