#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[101][101];
ll dp[101][101];
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        memset(dp,-1,sizeof dp);
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cin>>a[i][j];
            }
        }

    }
}
