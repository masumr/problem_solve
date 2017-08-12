#include<bits/stdc++.h>
using namespace std;
int mie(string s1,string s2,int l1,int l2){
    int dp[l1+1][l2+1];
    for(int i=0;i<=l1;i++)for(int j=0;j<=l2;j++){
        if(i==0)dp[i][j]=j;
        else if(j==0)dp[i][j]=i;
        else if(s1[i-1]==s2[j-1])dp[i][j]=dp[i-1][j-1];
        else{
            dp[i][j]=1+min(min(dp[i][j-1],dp[i-1][j]),dp[i-1][j-1]);
        }
    }
    return dp[l1][l2];
}
int main()
{
    int x,y;
    while(scanf("%d",&x)==1)
    {
        string s1,s2;
        cin>>s1;
        scanf("%d",&y);
        cin>>s2;
        printf("%d\n",mie(s1,s2,x,y));
    }
}
