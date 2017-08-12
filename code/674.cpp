#include<bits/stdc++.h>
using namespace std;
int coin[]={50,25,10,5,1};
int dp[5][7490];
int make;
int call(int i,int ammount)
{
    if(i>=5)
    {
        if(ammount==0)
            return 1;
        else
            return 0;
    }
    if(dp[i][ammount]!=-1) return dp[i][ammount];
    int r1=0,r2=0;
    if(ammount-coin[i]>=0)
        r1=call(i,ammount-coin[i]);
    r2=call(i+1,ammount);
    return dp[i][ammount]=r1+r2;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    while(scanf("%d",&make)==1){
        printf("%d\n",call(0,make));
    }
}

