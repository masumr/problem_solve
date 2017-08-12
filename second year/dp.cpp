#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=100009;
ll dp[N];
int co[N];
int n;
ll rec(int i){
    if(i>=n){
        return 0;
    }
    if(dp[i]!=-1)return dp[i];
    ll p1=0,p2=0,p3=0;
    p1=co[i]+rec(i+2);
    if(i+1<n)p2=co[i]+co[i+1]+rec(i+4);
    if(i+2<n)p3=co[i]+co[i+1]+co[i+2]+rec(i+6);
    return dp[i]=max(p1,max(p2,p3));
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++)scanf("%d",&co[i]);
        memset(dp,-1,sizeof dp);
        cout<<rec(0)<<endl;
    }
}
