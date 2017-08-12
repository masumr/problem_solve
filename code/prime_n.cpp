#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool prime(ll a){
    for(int i=2;i<=sqrt(a);i++)
        if(a%i==0) return true;
    return false;
}
int main(){
    ll n=100000007;
    if(prime(n)==false) cout<<n<<endl;
}
