#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
char a[101];
int mp(int lo,int hi,string a){
    if(lo==hi)return 0;
    if(dp[lo][hi]!=-1)return dp[lo][hi];
    if(lo==hi-1)return dp[lo][hi]=(a[lo]==a[hi])?0:1;
    return dp[lo][hi]=(a[lo]==a[hi])?(mp(lo+1,hi-1,a)):(min(mp(lo+1,hi,a),mp(lo,hi-1,a))+1);
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%s",a);
        memset(dp,-1,sizeof dp);
        printf("Case %d: %d\n",++c,mp(0,strlen(a)-1,a));
    }
}
