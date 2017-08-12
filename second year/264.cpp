#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    while(cin>>n){
        int s=(sqrt(1+8*n)-1)/2;
        s++;
        ll sum=((s+1)*s)/2;
        if(sum-s==n){
            sum-=s;
            s--;
        }
        ll ans=sum-n;
        if(s%2) cout<<"TERM "<<n<<" IS "<<1+ans<<"/"<<abs(s-ans)<<endl;
        else cout<<"TERM "<<n<<" IS "<<abs(s-ans)<<"/"<<1+ans<<endl;
    }
}
