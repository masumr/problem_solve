#include<bits/stdc++.h>
using namespace std;
const int N=1001;
int dp[N][N];
string dp2[N];
string s1,s2;
string print(int l1,int l2){
    if(dp[l1][l2]==-1 ||dp[l1][l2]==0)return "";
    if(!dp2[l1][l2].empty())return dp2[l1][l2];
    if(s1[l1]==s2[l2])return dp2[l1][l2]=s1[l1]+print(l1+1,l2+1);
    else if(dp[l1+1][l2]<dp[l1][l2+1])return dp2[l1][l2]=print(l1,l2+1);
    else if(dp[l1+1][l2]>dp[l1][l2+1])return dp2[l1][l2]=print(l1+1,l2);
    else dp2[l1][l2]=min(print(l1+1,l2),print(l1,l2+1));
}
int lcs(int l1,int l2){
    if(l1==s1.size() ||l2==s2.size())return 0;
    if(dp[l1][l2]!=-1)return dp[l1][l2];
    return dp[l1][l2]=(s1[l1]==s2[l2])?1+lcs(l1+1,l2+1):max(lcs(l1+1,l2),lcs(l1,l2+1));
}
int main(){
    cin>>s1>>s2;
    memset(dp,-1,sizeof dp);
    int len=lcs(0,0);
    cout<<len<<endl;
    for(int i=0;i<N;i++){
        dp2[i].clear();
    }
    string ss=print(0,0);
}
