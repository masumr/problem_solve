#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=12345678;
ll a[N];
int main(){
    int t;
    memset(a,0,sizeof a);
    for(ll i=2;i<=N;i+=2){
        for(ll j=i;j<=N;j+=i){
            a[j]+=i;
        }
    }
    //for(int i=2;i<=12;i++)cout<<a[i]<<' ';
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        printf("%lld\n",a[n]);
    }
}
