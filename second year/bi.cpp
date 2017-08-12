#include<bits/stdc++.h>
using namespace std;
void binary(int n){
    if(n<=1){cout<<n;return;}
    int r=n&1;
    binary(n>>1);
    cout<<r;
}
int main(){
    int n,p;
    cin>>n>>p;
    binary(n);
    cout<<endl;
    n&=~(1<<p);
    binary(n);
}
