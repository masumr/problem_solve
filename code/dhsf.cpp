#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int mod=97;
int bigmod(int n,int p){
    if(p==0) return 1;
    if(p==1) return n;
    int t=(n,p/2);
    t=t*t;
    if(p%2==1) t=(n*t);
    return t;
}
int main(){
    ll a;
    while(cin>>a) cout<<bigmod(a,11)<<endl;
}
