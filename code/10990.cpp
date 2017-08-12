#include<bits/stdc++.h>
using namespace std;
const int N=2000007;
int ph[N+10];
int a[N+10];
bitset<N+10>p;
void phi(){
    for(int i=1;i<=N;i++)ph[i]=i;
    ph[1]=1;
    for(int i=2;i<=N;i+=2){
        if(i!=2)p[i]=1;
            ph[i]/=2;
    }
    for(int i=3;i<=N;i+=2){
        if(!p[i]){
            ph[i]--;
            for(int j=i*2;j<=N;j+=i){
                p[j]=1;
                ph[j]=(ph[j]/i)*(i-1);
            }
        }
    }
}
int dp[N+10];
int sum[N+10];
int dph(int n){
    if(ph[n]==1)return 1;
    if(dp[n]!=-1)return dp[n];
    return dp[n]=dph(ph[n])+1;
}
int main(){
    phi();
    memset(dp,-1,sizeof dp);
    //for(int i=2;i<=100;i++)cout<<ph[i]<<' ';
    dp[2]=1;
    sum[2]=1;
    int nn=10000;
    int c1=0;
    for(int i=3;i<=N;i++){
        sum[i]=sum[i-1]+dph(i);
    }
   int t;
   scanf("%d",&t);
   while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        printf("%d\n",sum[m]-sum[n-1]);
   }
}
