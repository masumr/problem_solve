#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int main()
{
    int T,i,j;
    string s;
    int k;
    scanf("%d",&T);
    while(T--)
    {
      cin>>s>>k;
      memset(dp,0,sizeof dp);
      int ans = 0;
      int len = s.size();
      for( int i = len ; i >=1 ; i--){
            for( j = i ; j <= len ; j++ ){
                    dp[i][j] = dp[i+1][j-1] +  (s[i-1] != s[j-1])  ;
                    if(dp[i][j] <= k ) ans = max( ans , j-i+1 );
            }
      }
      cout<< ans << endl;
    }
}
