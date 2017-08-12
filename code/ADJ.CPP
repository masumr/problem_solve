#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
string a,b,c;
int k=0;
int lcs(int i,int j)
{
    if(i<0 || j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(a[i]==b[j]){
        dp[i][j]=1+lcs(i-1,j-1);
    }
    else    dp[i][j]=max(lcs(i-1,j),lcs(i,j-1));
    return dp[i][j];

}
int main()
{
    while(cin>>a>>b){
        memset(dp,-1,sizeof(dp));
        int x=lcs(a.size()-1,b.size()-1);
        cout<<x<<endl;
        c.clear();
    }
}
