#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll a;
    while(cin>>a){
        int c=a%100;a/=100;
        int s=a%100;a/=100;
        int m=a%100;a/=100;
        int h=a%100;
        ll tt=(h*360000+m*6000+s*100+c);
        printf("%07lld\n",(125*tt)/108);
    }
}
