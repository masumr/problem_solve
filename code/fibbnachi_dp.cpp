#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int dp[1000];
ll fibbnachi(int n){
    if(n==0 || n==1) return 1;
    return (dp[n]==-1)?(fibbnachi(n-1)+fibbnachi(n-2)):dp[n];
}
int main(){
    int n;
    memset(dp,-1,sizeof(dp));
    cin>>n;
    cout<<fibbnachi(n)<<endl;
}
