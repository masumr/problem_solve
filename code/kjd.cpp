#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<char,ll>mp;
int main(){
    ll n,s;
    char c;
    mp['a']=4;mp['b']=5;mp['c']=6;mp['d']=3;mp['e']=2;mp['f']=1;
    cin>>n>>c;
    if(n<=2) s=n-1;
    else s=(n-1)/2;
    ll sum=(n-1)+(s*6)+mp[c];
    if(n%4==0 || n%4==3)sum-=2;
    cout<<sum<<endl;
}
