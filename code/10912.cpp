#include<bits/stdc++.h>
using namespace std;
const int N=10003;
int dp[N][352][28];
int l,s,jj;
int make(int i,int j,int k){
    if(k==28)return 0;
    if(i==l){
        //cout<<j<<' '<<i<<' '<<k<<endl;
        if(j==s)return 1;
        else return 0;
    }
    if(dp[i][j][k]!=-1)return dp[i][j][k];
    int p1=0,p2=0;
    if(j+k<=s)p1=make(i+1,j+k,k+1);
    p2=make(i,j,k+1);
    return dp[i][j][k]=p1+p2;
}
int main(){
    int c=0;
    memset(dp,-1,sizeof dp);
    while(scanf("%d%d",&l,&s) &&(l &&s)){
       if(l>26){
           // cout<<s<<endl;
            printf("Case %d: %d\n",++c,0);
        }
        else{
            printf("Case %d: %d\n",++c,make(0,0,1));
        }
    }
}
