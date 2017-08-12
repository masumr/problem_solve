#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
    ll n;
    cin>>n;
    int count=0;
    int s1=0;
    while(n!=1){
        ll s=n;
        n=(n/2);
        if(s%2 && s!=1)s1++;
        count++;
    }
    if(s1%2)count++;
    cout<<count<<endl;
}
