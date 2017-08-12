#include<cstdio>
#include<string.h>
using namespace std;
typedef unsigned long long int ll;
const int N=62;
ll dp[N][N];
ll trib(int n,int b){
    if(n<=1)return 1;
    if(dp[n][b]!=-1)return dp[n][b];
    ll p1=1;
    for(int i=1;i<=b;i++)p1+=trib(n-i,b);
    return dp[n][b]=p1;
}
int main(){
    memset(dp,-1,sizeof dp);
    int n,b;int c=0;
    while(scanf("%d%d",&n,&b)==2){
        if(n>61 || b>=61)return 0;
        printf("Case %d: %lu\n",++c,trib(n,b));
    }
}
