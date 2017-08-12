#include<bits/stdc++.h>
using namespace std;
const int N=130;
int dp[N][N];
string s;
int lps(int l1,int l2){
    if(l1>l2)return 0;
    if(l1==l2)return 1;
    if(dp[l1][l2]!=-1)return dp[l1][l2];
    if(s[l1]==s[l2] && l1+1==l2)2;
    return (s[l1]==s[l2])?(2+lps(l1+1,l2-1)):max(lps(l1+1,l2),lps(l1,l2-1));
}
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        memset(dp,-1,sizeof dp);
        getline(cin,s);
        printf("%d\n",lps(0,s.size()-1));
    }
}
