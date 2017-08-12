#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pi acos(-1)
const int N=1000003;
ll dp[N];
double degre(int n){
    double f=n*1.0;
    return sin(f)*sin(f)*f;
}
double sq(int n){
    double f=n*1.0;
    return f-sqrt(f);
}
double lg(int n){
    double f=n*1.0;
    return log(f);
}
ll mod=1000000;
ll sli(int n){
    if(n==0)return 1;
    if(dp[n]!=-1)return dp[n];
    return dp[n]=(sli((int)sq(n))%mod+sli((int)lg(n))%mod+sli((int)degre(n))%mod)%mod;
}
int main(){
    int n;
    memset(dp,-1,sizeof dp);
    while(scanf("%d",&n) && n>=0){
        printf("%lld\n",sli(n));
    }
}
