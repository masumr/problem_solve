#include<bits/stdc++.h>
using namespace std;
typedef __int128_t ll;
ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        ll a,b;
        char ch;
        cin>>a>>ch>>b;
        ll g=gcd(a,b);
        cout<<(a/g)<<ch<<(b/g)<<endl;
    }
}
