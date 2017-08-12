#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll a,b,c;
    cin>>a>>b>>c;
    a=((a%c==0)?a/c:a/c+1);
    b=((b%c==0)?b/c:b/c+1);
    cout<<a*b<<endl;
}
