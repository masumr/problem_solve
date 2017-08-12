#include<bits/stdc++.h>
using namespace std;
const int N=53;
int a[N];
int dp[N][N];
int fun(int x,int y){
    if(y-x==1)return 0;
    if(dp[x][y]!=-1)return dp[x][y];
    //cout<<x<<' '<<y<<endl;
    int v=10000000;
    for(int i=x+1;i<y;i++)v=min(a[y]-a[x]+fun(x,i)+fun(i,y),v);
    return dp[x][y]=v;
}
int main(){
    int n;
    while(scanf("%d",&n) && n){
        a[0]=0;
        int x;
        scanf("%d",&x);
        for(int i=1;i<=x;i++)scanf("%d",&a[i]);
        a[x+1]=n;
        memset(dp,-1,sizeof dp);
        cout<<n<<endl;
        printf("The minimum cutting is %d.\n",fun(0,x+1));
    }
}
