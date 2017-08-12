#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=10007;
int a[101];
int dp[N];
int n;
int main(){
    for(int i=1;i<=100;i++)a[i]=i*i;
    for(int i=1;i<N;i++)dp[i]=i;
    dp[0]=0;
    for(int i=2;i<=100;i++){
        //cout<<a[i]<<' ';
        for(int j=a[i];j<N;j++){
            if(j-a[i]>=0)dp[j]=min(dp[j],1+dp[j-a[i]]);
        }
    }
    int t;

    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        printf("%d\n",dp[n]);
    }
}
