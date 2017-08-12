#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    ll s1=(n/2)+(n%2);
    ll s2=(n/2);
    cout<<((s2*s2+s2)-(s1*s1))<<endl;
}
