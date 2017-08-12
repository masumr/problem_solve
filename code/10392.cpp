#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const unsigned int n=100000001;
//unsigned int v[10000001];
ll v[5761459];
ll a[n/32];
int k;
void sieve(){
    for(int i=3;i*i<=n;i+=2){
        if((a[i/32] & (1<<(i%32)))==0){
            for(int j=i*i;j<=n;j+=(i*2)){
                a[j/32]=(a[j/32]|(1<<(j%32)));
            }
        }
    }
    v[0]=2;
    k=1;
    for(int i=3;i<=n;i+=2){
        if((a[i/32] & (1<<(i%32)))==0) v[k++]=i;
    }
}
void pf(ll n){
    for(int i=0;i<k;i++){
        if(n%v[i]==0){
            while(n%v[i]==0){
                n/=v[i];
                printf("%4lld\n",v[i]);
            }
        }
        if(n<v[i]) break;
    }
    if(n>1) printf("%4lld\n",n);
}
int main(){
    k=1;
    sieve();
    ll n;
    while(scanf("%lld",&n)==1 && n>=0){
        pf(n);
        cout<<endl;
    }

}
