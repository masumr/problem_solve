#include<bits/stdc++.h>
using namespace std;
int dp[1003][1003];
int pa(char str[],int l,int h){
    if(l>h) return 0;
    if(l==h) return 0;
    if(dp[l][h]!=-1) return dp[l][h];
    if(l==h-1) return dp[l][h]=(str[l]==str[h])?0:1;
    return dp[l][h]=(str[l]==str[h])?pa(str,l+1,h-1):(min(pa(str,l+1,h),min(pa(str,l,h-1),pa(str,l+1,h-1)))+1);
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    char str[1003];
    while(t--){
        scanf("%s",str);
        memset(dp,-1,sizeof dp);
        printf("Case %d: %d\n",++c,pa(str,0,strlen(str)-1));
    }
}
