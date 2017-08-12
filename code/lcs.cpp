#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
string s1,s2;
int m1,m2;
int lcs(int l1,int l2){
    if(l1==0 ||l2==0)return 0;
    if(dp[l1][l2]!=-1)return dp[l1][l2];
    return dp[l1][l2]=(s1[l1-1]==s2[l2-1])?(1+lcs(l1-1,l2-1)):max(lcs(l1-1,l2),lcs(l1,l2-1));
}
int main(){
    cin>>s1>>s2;
    int l1=s1.size();
    int l2=s2.size();
    memset(dp,-1,sizeof dp);
    cout<<lcs(l1,l2)<<endl;
}
