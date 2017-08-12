#include<bits/stdc++.h>
using namespace std;
const int N=623456;
typedef long long int ll;
ll a[N];
ll sum[N];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<n;i++){
        sum[i]=abs(a[i]-a[i+1]);
        if((i-1)%2)sum[i]*=-1;
    }
    ll mx=0;
    ll sk=0;
    ll sv=0;
    for(int i=1;i<n;i++){
        sk+=sum[i];
        sv-=sum[i];
        mx=max(sv,mx);
        mx=max(mx,sk);
        if(sk<0)sk=0;
        if(sv<0)sv=0;
    }
    mx=max(sk,mx);
    mx=max(sv,mx);
    cout<<mx<<endl;
}
