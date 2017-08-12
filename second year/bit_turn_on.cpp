#include<bits/stdc++.h>
using namespace std;
void binary(int n){if(n<=1){cout<<n;return;}int rem=n&1;binary(n>>1);cout<<rem;}
int main(){
    int n,pos;
    scanf("%d%d",&n,&pos);
    binary(n);
    cout<<endl;
    n|=(1<<pos);
    binary(n);
}
