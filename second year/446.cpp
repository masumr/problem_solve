#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int hex_to_con_dec(string a){
    int x=a.size();
    ll sum=0;
    int y=x-1;
    int s;
    for(int i=0;i<x;i++){
        if(a[i]>='0' && a[i]<='9'){
            s=(a[i]-48);
        }
        else s=(a[i]-55);
        sum+=s*pow(16,y--);
    }
    return sum;
}
ll dec_to_con_bi(ll a){
    ll sum=0;
    vector<ll>v;
    v.clear();
    while(a!=0){
        sum=(a%2);
        a/=2;
        v.push_back(sum);
    }
    ll s=0;
    for(int i=v.size()-1;i>=0;i--){
        s=(s*10)+v[i];
    }
    return s;
}
int main(){
    string a,b;
    char c;
    int t;
    cin>>t;
    while(t--){
        cin>>a>>c>>b;
        ll x1=hex_to_con_dec(a);
        ll x2=hex_to_con_dec(b);
        if(c=='+') printf("%013lld + %013lld = %d\n",dec_to_con_bi(x1),dec_to_con_bi(x2),x1+x2);
        else printf("%013lld - %013lld = %d\n",dec_to_con_bi(x1),dec_to_con_bi(x2),x1-x2);
    }
}
