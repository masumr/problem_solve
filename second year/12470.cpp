#include<cstdio>
#include<string.h>
typedef long long int ll;
ll mod=1000000009;
void multiple(ll f[3][3],ll m[3][3]){
    ll tmp[3][3];
    memset(tmp,0,sizeof tmp);
    for(int i=0;i<3;i++)for(int j=0;j<3;j++)for(int k=0;k<3;k++)
        tmp[i][j]=(tmp[i][j]+((m[i][k]%mod)*(f[k][j]%mod))%mod)%mod;
    for(int i=0;i<3;i++)for(int j=0;j<3;j++)f[i][j]=tmp[i][j];
}
void power(ll f[3][3],ll n){
    if(n==1)return;
    ll m[3][3]={{1,1,1},{1,0,0},{0,1,0}};
    power(f,n>>1);
    multiple(f,f);
    if(n&1)multiple(f,m);
}
ll ans(ll n){
    ll f[3][3]={{1,1,1},{1,0,0},{0,1,0}};
    power(f,n);
    return ((f[0][0]%mod)*2+(f[0][1]%mod))%mod;
}
int main(){
   ll n;
   ll fib[]={0,1,2};
   while(scanf("%lld",&n) && n){
        n--;
        if(n<3){
            printf("%lld\n",fib[n]);
        }
        else{
            printf("%lld\n",ans(n-2));
        }
   }
}
