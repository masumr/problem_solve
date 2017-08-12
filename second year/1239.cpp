#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int mp(char a[],int l,int h){
    if(l>h) return 0;
    if(l==h) return 0;
    if(dp[l][h]!=-1) return dp[l][h];
    if(l==h-1) return dp[l][h]=(a[l]==a[h])?0:1;
    return dp[l][h]=(a[l]==a[h])?mp(a,l+1,h-1):(min(mp(a,l+1,h),mp(a,l,h-1))+1);
}
int main(){
    char a[1001];
    int k,t;
    scanf("%d",&t);
    while(t--){
        scanf("%s%d",a,&k);
        memset(dp,-1,sizeof dp);
        int len=strlen(a);
        int tt=mp(a,0,len-1);
        cout<<tt<<' '<<len<<endl;
        if(tt<=k)printf("%d\n",len+tt);
        else{
            //cout<<tt<<' '<<k<<endl;
            len+=tt;
            tt-=k;
            len-=(tt*2);
            printf("%d\n",len);
        }
    }
}
