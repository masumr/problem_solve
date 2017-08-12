#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll sum=(n*(n+1)*(3*n*n-n-2))/12;
        cout<<sum<<endl;
    }
}
