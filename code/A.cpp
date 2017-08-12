#include<bits/stdc++.h>
using namespace std;
const int N=212345;
typedef long long int ll;
ll a[N];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%lld",&a[i]);
    sort(a,a+n);
    ll mx=12345678765543;
    for(int i=1;i<n;i++){
        mx=min(mx,a[i]-a[i-1]);
    }
    int cnt=0;
    for(int i=1;i<n;i++){
        ll sum=a[i]-a[i-1];
        if(sum==mx)cnt++;
    }
    printf("%lld %d\n",mx,cnt);
}
