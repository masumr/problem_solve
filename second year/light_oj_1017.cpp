#include<bits/stdc++.h>
using namespace std;
const int N=110;
int a[N];
vector<int>v;
int n,w,k;
int dp[N][N];
int sum(int i,int e){
    cout<<i<<' '<<e<<endl;
    if(i>=n+1){
        return 0;
    }
    if(dp[i][e]!=-1)return dp[i][e];
    int p1=0,p2=0;
    if(e+1<=k)p1=a[i]+sum(i+a[i],e+1);
    p2=sum(i+1,e);
    return dp[i][e]=max(p1,p2);
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        memset(dp,-1,sizeof dp);
        scanf("%d%d%d",&n,&w,&k);
        for(int i=1;i<=n;i++){
            int x,y;
            scanf("%d%d",&x,&y);
            v.push_back(y);
        }
        sort(v.begin(),v.end());
        int lo=0,hi=0;
        int c1=1;
        //memset(a,0,sizeof a);
        //for(int i=0;i<v.size();i++)cout<<v[i]<<' ';cout<<endl;
       // int cnt=0;
        while(hi<v.size()){
           // if(cnt==20)break;
            //cnt++;
            int val=v[lo]+w;
            if(val>=v[hi]){
                hi++;
            }
            else{
                a[lo+1]=(hi-lo);
                lo++;
            }
        }
        for(int i=lo;i<v.size();i++){
            a[i+1]=(n-i);
        }
       for(int i=1;i<=n;i++)cout<<a[i]<<' ';cout<<endl;
        printf("Case %d: %d\n",++c,sum(1,0));
        v.clear();
    }
}
