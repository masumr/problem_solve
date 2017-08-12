#include<bits/stdc++.h>
using namespace std;
string s;
const int N=5001;
int min_pal(int n){
    string sk=s;
    reverse(sk.begin(),sk.end());
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0)dp[i][j]=0;
            else if(s[i-1]==sk[j-1])dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return (s.size()-dp[n][n]);
}
int main(){
    int n;
    scanf("%d",&n);
    cin>>s;
    cout<<min_pal(n)<<endl;
}
