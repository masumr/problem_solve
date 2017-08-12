#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll egcd(ll a,ll b,ll &x,ll &y){
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    ll x1,y1,g=egcd(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return g;
}
int main(){
    ll a,b,x,y;
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        ll s1=a/b;
        ll s2=(a/b)+((a%b==0)?0:1);
        ll s=egcd(s1,s2,x,y);
        x*=(a/s);
        y*=(a/s);
        cout<<x<<' '<<y<<endl;
        /*int count=(a/s2);
        if(a%s1!=0) count++;
        count--;
        cout<<x+(s2*count)/s<<' '<<y-(s1*count)/s<<endl;*/
    }
}
