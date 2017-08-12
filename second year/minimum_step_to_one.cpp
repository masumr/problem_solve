#include<bits/stdc++.h>
using namespace std;
const int N=20000007;
int dp[N];
int _find(int n){
    if(n==1)return 0;
    if(dp[n]!=-1)return dp[n];
    int r=1+_find(n-1);
    if(n%2==0)r=min(r,1+_find(n/2));
    if(n%3==0)r=min(r,1+_find(n/3));
    return dp[n]=r;
}
void loop_u(){
    dp[1]=0;
    for(int i=2;i<=N-5;i++){
        dp[i]=1+dp[i-1];
        if(i%2==0)dp[i]=min(dp[i],1+dp[i/2]);
        if(i%3==0)dp[i]=min(dp[i],1+dp[i/3]);
    }
    //return dp[n];
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    //loop_u();
    memset(dp,-1,sizeof dp);
    while(t--){
        int n;
        scanf("%d",&n);
        printf("Case %d: %d\n",++c,_find(n));
    }
}
