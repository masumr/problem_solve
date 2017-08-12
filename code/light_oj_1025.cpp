#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[61][61];
string s;
ll len(int i,int j){
    if(i>j)return 0;
    if(i==j)return 1;
    if(dp[i][j]!=-1)return dp[i][j];
    if(s[i]==s[j])return dp[i][j]=(1+len(i+1,j)+len(i,j-1));
    else return dp[i][j]=len(i+1,j)+len(i,j-1)-len(i+1,j-1);
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        cin>>s;
        memset(dp,-1,sizeof dp);
        printf("Case %d: %lld\n",++c,len(0,s.size()-1));
    }
}
