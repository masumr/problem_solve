#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int dp[N];
int v[N];
int a[103],b[103];
map<int,int>mp;
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++)scanf("%d",&a[i]);
        for(int i=1;i<=n;i++)scanf("%d",&b[i]);
        memset(dp,0,sizeof dp);
        dp[0]=1;
        for(int i=1;i<=n;i++){
            for(int j=a[i];j<=m;j++){
                if(dp[j]==0 and dp[j-a[i]]==1 and mp[j-a[i]]+1<=b[i]){
                    mp[j]=mp[j-a[i]]+1;
                    dp[j]=1;
                }
            }
            mp.clear();
        }
        int cnt=0;
        for(int i=1;i<=m;i++){
            cout<<dp[i]<<' ';
            if(dp[i])cnt++;
        }
        printf("Case %d: %d\n",++c,cnt);
    }
}
