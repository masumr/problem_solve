#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fib(ll n){
    ll i,j,k,t,h;
    i=h=1;
    j=k=0;
    while(n){
        if(n&1){
            t=j*h;
            j=i*h+k*j+t;
            i=i*k+t;
        }
        n>>=1;
        t=h*h;
        h=2*k*h+t;
        k=k*k+t;
    }
    return j;
}
int main(){
    ll n;
    while(cin>>n){
        cout<<fib(n)<<endl;
    }

}
