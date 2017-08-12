#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int make;
int coin[]={1,2,3,4,5};
int coin_change(int i,int make){
    if(i>=4){
        if(make==0) return 1;
        else return 0;
    }
    if(dp[i][make]!=-1) return dp[i][make];
    int p1=0,p2=0;
    if(make-coin[i]>=0) p1=coin_change(i,make-coin[i]);
    p2=coin_change(i+1,make);
    return dp[i][make]=p1+p2;
}
int main(){
    memset(dp,-1,sizeof dp);
    while(cin>>make){
        cout<<coin_change(0,make)<<endl;
    }
}
