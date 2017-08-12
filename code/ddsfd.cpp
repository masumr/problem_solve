#include<bits/stdc++.h>
using namespace std;
int sum;
int dp[1000007];
int value[1000007];
void binary(int n){
    if(n<=1){sum=n;return;}
    int rem=n&1;
    binary(n>>1);
    sum=sum*10+rem;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=128;i++){
        sum=0;
        binary(i);
        v.push_back(sum);
    }
    vector<int>v1;
    int t=lower_bound(v.begin(),v.end(),n)-v.begin();
    for(int i=1;i<=n;i++){
        //sum[i]=i;
        dp[i]=i;
        value[i]=1;
    }
    for(int i=1;i<=t;i++){
        for(int j=0;j<=n;j++){
            if(j+v[i]<=n){
                if(dp[j]+1<dp[j+v[i]]){
                    dp[j+v[i]]=dp[j]+1;
                    value[j]=v[i];
                }
            }
            else break;
        }
    }
    //for(int i=1;i<=n;i++)cout<<dp[i]<<' ';
    cout<<dp[n]<<endl;
    for(int i=0;i<dp[n];i++){
        cout<<value[i]<<' ';
    }
}
