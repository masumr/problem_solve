#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=61;
ll dp[61][61];
string s;
ll len(int i,int j){
    if(i==j)return 1;
    if(i+1==j)return dp[i][j]=(s[i]==s[j])?1:0;
    if(dp[i][j]!=-1)return dp[i][j];
    return dp[i][j]=(s[i]==s[j])?(1+len(i+1,j-1)+(len(i+1,j)+len(i,j-1)-len(i+1,j-1))):(len(i+1,j)+len(i,j-1)-len(i+1,j-1));
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        memset(dp,-1,sizeof dp);
        string s;
        cin>>s;
        cout<<len(0,s.size()-1)<<endl;
    }
}
