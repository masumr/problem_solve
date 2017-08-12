#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[1000001];
int k;
void SOD(ll n){
    int s=1;
    if(n&1) s++;
    for(ll i=1;i*i<=n;i+=s){
        if(n%i==0){
            a[k++]=i;
            if(i!=n/i) a[k++]=n/i;
        }
    }
    sort(a,a+k);
}
ll gcd(ll a,ll b){
    return (b==0)?a:gcd(b,a%b);
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        ll n;
        scanf("%lld",&n);
        int count=0;
        k=0;
        SOD(n);
        for(int i=0;i<k;i++){
            for(int j=i;j<k;j++){
                    ll sum=(a[i]*a[j])/gcd(a[i],a[j]);
                    if(sum==n) count++;
            }
        }
        printf("Case %d: %d\n",++c,count);
    }
}
