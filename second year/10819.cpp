#include<bits/stdc++.h>
using namespace std;
struct node{
    int a,b;
};
bool compare(node x,node y){
    if(x.a<y.a) return true;
    else return false;
}
int dp[11001][111];
int wi[107],co[107];
int n,cost;
vector<node>v;
int napsack(int i,int k){
    if(i==n)return 0;
    if(dp[k][i]!=-1) return dp[k][i];
    int p1=0,p2=0;
    if((k+wi[i]<=cost)||( k+wi[i]>2000 && k+wi[i]<=cost+200 ))p1=co[i]+napsack(i+1,k+wi[i]);
    p2=napsack(i+1,k);
    return dp[k][i]=max(p1,p2);
}
int main(){
    while(scanf("%d%d",&cost,&n)==2){
        for(int i=0;i<n;i++){
            int x,y;
            scanf("%d%d",&x,&y);
            node xx;
            xx.a=x;
            xx.b=y;
            v.push_back(xx);
        }
        sort(v.begin(),v.end(),compare);
        for(int i=0;i<v.size();i++){
            //cout<<v[i].a<<' '<<v[i].b<<endl;
            wi[i]=v[i].a;
            co[i]=v[i].b;
        }
        memset(dp,-1,sizeof dp);
        cout<<napsack(0,0)<<endl;
        v.clear();
    }
}
