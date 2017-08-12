#include<bits/stdc++.h>
using namespace std;
int dp[500001];
int jo(int n,int k)
{
   if(n==1) return 1;
   if(dp[n]!=-1) return dp[n];
   return dp[n]=(jo(n-1,k)+k-1)%n+1;
}
int main(){
    int n;
    memset(dp,-1,sizeof(dp));
    while(cin>>n){
        if(n==0) break;
        if(n<=2) cout<<n<<endl;
        else cout<<jo(n,2)-1<<endl;
    }
}
