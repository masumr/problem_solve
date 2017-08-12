#include<bits/stdc++.h>
using namespace std;
void binary(int n){if(n<=1){cout<<n;return;}int r=n&1;binary(n>>1);cout<<r;}
int main(){
    int n,pos;
    scanf("%d%d",&n,&pos);
    binary(n);
    cout<<endl;
    cout<<(n&(1<<pos))<<endl;
    //binary(n);
}
