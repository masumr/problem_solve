#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=150;
ll dp[N][N];
ll fun(int n,int k){
    if(n<k)return 0;
    if(k==0)return 1;
    if(n==k)return 1;
    if(k==1)return n;
    if(dp[n][k]!=-1)return dp[n][k];
    return dp[n][k]=fun(n-1,k-1)+fun(n-1,k);
}
int main(){
    memset(dp,-1,sizeof dp);
    int t;
    scanf("%d",&t);
    while(t--){
        int n,p,t;
        scanf("%d%d%d",&n,&t,&p);
        t-=p*n;
        printf("%lld\n",fun(t+n-1,n-1));
    }
}

