#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>v;
ll dp[303][303][303];
ll coin[303],n;
ll coin_change(ll i,ll n,ll k){
    if(i>=k) return (n==0)?1:0;
    if(dp[i][n][k]!=-1) return dp[i][n][k];
    ll p1=0,p2=0;
    if(n-coin[i]>=0) p1=coin_change(i,n-coin[i],k);
    p2=coin_change(i+1,n,k);
    return dp[i][n][k]=p1+p2;
}
int main(){
    string s;
    for(ll i=0;i<302;i++)coin[i-1]=i;
    memset(dp,-1,sizeof dp);
    while(getline(cin,s)){
        ll i=0,j,num;
        stringstream ss(s);
        while(ss>>num) v.push_back(num);
            ll sum=0;
            if(v.size()==1){
                sum=coin_change(0,v[0],v[0]);
            }
            else if(v.size()==2){
                if(v[1]>v[0]) v[1]=v[0];
                sum=coin_change(0,v[0],v[1]);
            }
            else {
                if(v[1]>v[0] and v[2]>v[0]) sum=0;
                else if(v[0]==0 and v[1]==0) sum=1;
                else{
                    if(v[1]>v[0]) v[1]=v[0];
                    if(v[2]>v[0]) v[2]=v[0]+1;
                    //cout<<v[1]<<' '<<v[2]<<endl;
                    ll s1=(coin_change(0,v[0],v[2]));
                    ll s2=(coin_change(0,v[0],v[1]-1));
                    //cout<<s1<<' '<<s2<<endl;
                    sum=s1-s2;
                }

        }
        cout<<sum<<endl;
        v.clear();ss.clear();
    }
}
