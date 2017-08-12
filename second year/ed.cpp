#include<cstdio>
#include<algorithm>
#include<string.h>
using namespace std;
int dp[2001][2001];
int ed(char s1[
       ],char s2[],int m,int n){
    if(m==0) return n;
    if(n==0) return m;
    if(dp[m][n]!=-1) return dp[m][n];
    if(s1[m-1]==s2[n-1]) return dp[m][n]=ed(s1,s2,m-1,n-1);
    else{
        return dp[m][n]=1+min(ed(s1,s2,m-1,n),min(ed(s1,s2,m,n-1),ed(s1,s2,m-1,n-1)));
    }
}
int main(){
    char s1[2001],s2[2001];
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%s%s",s1,s2);
        int l1=strlen(s1);
        int l2=strlen(s2);
        memset(dp,-1,sizeof dp);
        printf("%d\n",ed(s1,s2,l1,l2));
    }
}
