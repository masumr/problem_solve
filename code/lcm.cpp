#include<bits/stdc++.h>
using namespace std;
typedef long long unsigned int ll;
bool Check(unsigned int N,unsigned int pos){return (bool)(N & (1<<pos));}
unsigned int Set(unsigned int N,unsigned int pos){	return N=N | (1<<pos);}
const unsigned int size=5761456;
unsigned int v[size];
unsigned int status[99999989/32];
ll mod=pow(2,32);
unsigned int dp[size];
unsigned int k;
void sieve(){
     unsigned int i,j;
     unsigned int n=99999989;
    for(i = 3; i*i<=n; i += 2 ) {
		 if( Check(status[i/32],i%32)==0){
	 		 for(j = i*i; j <=n; j += 2*i ){
				 status[j/32]=Set(status[j/32],j % 32)   ;
	 		 }
		 }
	 }
    v[k++]=2;
    for(i=3;i<=n;i+=2){
        if(Check(status[i/32],i%32)==0)v[k++]=i;
    }
}
ll lcm(unsigned int n){
    ll sum=1;
    unsigned int i;
    for(i=0;v[i]*v[i]<=n;i++){
        unsigned int temp=n/v[i];
        while(temp>=v[i]){
            temp/=v[i];
            sum*=v[i];
            sum%=mod;
        }
    }
    return sum;
}
unsigned int binary_search(unsigned int lo,unsigned int hi,unsigned int n){
    if(lo>=hi) return lo;
    unsigned int mid=(lo+hi)/2;
    if(v[mid]>=n){
        return binary_search(lo,mid,n);
    }
    else return binary_search(mid+1,hi,n);
}
int main(){
    k=0;
    sieve();
    unsigned int t,c=0;
    scanf("%d",&t);
    dp[0]=2;
    for(unsigned int i=1;i<k;i++){
        ll sum=(dp[i-1]*v[i])%mod;
        dp[i]=(unsigned int) sum;
    }
    while(t--){
        unsigned int n;
        scanf("%d",&n);
        unsigned int a1=binary_search(0,k-1,n);
        while(v[a1]>n) a1--;
        unsigned int  ans=(lcm(n)*dp[a1])%mod;
        printf("Case %d: %lld\n",++c,ans);
    }
}
