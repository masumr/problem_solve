#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int b,n,g[25][25],dp[210][30];
int rec(int budgetleft,int garment){
    if(garment==n)return 0;
    if(dp[garment][budgetleft]!=-1)return dp[garment][budgetleft];
    int m=g[garment][0],flag=1;
    for(int i=1;i<=m;i++){
        if(budgetleft-g[garment][i]>=0)dp[garment][budgetleft]=max(dp[garment][budgetleft],rec(budgetleft-g[garment][i],garment+1)+g[garment][i]);
            if(dp[garment][budgetleft]>0)flag=0;
    }
    if(flag==1)
        return -1000000000;
    return dp[garment][budgetleft];
}
int main(){
    int t,maxi;
    scanf("%d",&t);
    while(t--){
        memset(dp,-1,sizeof dp);
        //memset(g,0,sizeof g);
        scanf("%d%d",&b,&n);
        for(int i=0;i<n;i++){
            scanf("%d",&g[i][0]);
            for(int j=1;j<=g[i][0];j++)scanf("%d",&g[i][j]);
        }
        maxi=rec(b,0);
        if(maxi<=0)
            printf("no solution\n");
        else
            printf("%d\n",maxi);
    }
}
