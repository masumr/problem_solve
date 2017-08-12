#include<cstdio>
#include<string.h>
#include<algorithm>
using namespace std;
int a[33],n;
int dp[1001][31];
int mx;
int kk;
int napsack(int i,int c){
    if(i==kk)return 0;
    if(dp[c][i]!=-1)return dp[c][i];
    int p1=0,p2=0;
    if(c+a[i]<=mx)p1=napsack(i+1,c+a[i])+a[i];
    p2=napsack(i+1,c);
    return dp[c][i]=max(p1,p2);
}
int main(){
    int c=0;
    while(scanf("%d",&n)==1){
        mx=0;
        for(int i=0;i<n;i++){scanf("%d",&a[i]);}
        printf("Case #%d: ",++c);
        for(int i=0;i<n;i++){
            printf("%d",a[i]);
            if(i!=n-1)printf(" ");
        }
        printf("\n");
        bool ck=0;
        if(a[0]>=a[1])ck=1;
        for(int i=2;i<n;i++){
            if(ck)break;
            memset(dp,-1,sizeof dp);
            if(a[i-1]>=a[i]){ck=1;break;}
            mx=a[i];
            kk=i;
            int nn=napsack(0,0);
            //cout<<nn<<' ';
            if(nn==a[i]){ck=1;break;}
        }
        if(!ck)printf("This is an A-sequence.\n");
        else printf("This is not an A-sequence.\n");
    }
}
