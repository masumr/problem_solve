#include<bits/stdc++.h>
using namespace std;
const int nn=1130;
typedef long long int ll;
bitset<nn>p;
ll a[1221];
ll k;
ll dp[1121][16];
ll n,cc;
void sieve(){
    for(int i=3;i*i<=nn;i+=2)if(p[i]==0)for(int j=i*i;j<=nn;j+=(i*2))p[j]=1;
    a[k++]=2;
    for(int i=3;i<=nn;i+=2)if(p[i]==0)a[k++]=i;
}
int main(){
    k=1;
    sieve();
    ll x,y;
    //memset(dp,0,sizeof dp);
    dp[0][0]=1;
    for(int p=1;p<k;p++)for (int i=1120;i >= a[p]; i--)for (int j = 1; j <= 14; j++)dp[i][j] += dp[i- a[p]][j-1];
    while((scanf("%lld %lld",&x,&y)) &&(x!=0 && y!=0)){
        printf("%lld\n",dp[x][y]);

    }
}
