#include<bits/stdc++.h>
using namespace std;
int bigmod(int n,int p,int mod){
    int t=1;
    int s=1;
    while(p){
        if(p%2){
            t=((t%mod)*(n%mod))%mod;
            p--;
        }
        else{
            t=((t%mod)*(t%mod))%mod;
            p/=2;
        }
    }
    return t;
}
int main(){
    cout<<(111111111111111111/99)<<endl;
    //else cout<<"Yes"<<endl;
}
