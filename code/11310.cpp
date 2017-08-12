#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=42;
ll dp[N];
ll fun(int n){
    if(n==0)return 1;
    if(n<0)return 0;
    if(dp[n]!=-1)return dp[n];
    return dp[n]=4*fun(n-2)+fun(n-1);
}
int main(){
    int t;
    scanf("%d",&t);
    memset(dp,-1,sizeof dp);
    while(t--){
        int n;
        scanf("%d",&n);
        printf("%lld\n",fun(n));
    }
}
