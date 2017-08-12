#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll a;
    int t,c=0;
    cin>>t;
    while(t--){
        cin>>a;
        a/=10000;
        int m=a%100;
        int d=a/100;
        cout<<m<<' '<<d<<endl;
    }
}
