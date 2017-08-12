#include<bits/stdc++.h>
using namespace std;
const int N=113;
int dp[N][N];
string s1,s2;
int lcs(int l1,int l2){
    if(l1==s1.size() || l2==s2.size())return 0;
    if(dp[l1][l2]!=-1)return dp[l1][l2];
    return dp[l1][l2]=(s1[l1]==s2[l2])?(1+lcs(l1+1,l2+1)):max(lcs(l1+1,l2),lcs(l1,l2+1));
}
string ans;
string ss;
string dp2[N][N];
vector<string>v;
bool ck;
string _find(int l1,int l2){
    if(dp[l1][l2]==0 ||dp[l1][l2]==-1)return "";
    if(!dp2[l1][l2].empty())return dp2[l1][l2];
    if(s1[l1]==s2[l2])return dp2[l1][l2]=s1[l1]+_find(l1+1,l2+1);
    else{
        if(dp[l1+1][l2]>dp[l1][l2+1])return dp2[l1][l2]=_find(l1+1,l2);
        else if(dp[l1+1][l2]<dp[l1][l2+1])return dp2[l1][l2]=_find(l1,l2+1);
        else return dp2[l1][l2]=min(_find(l1+1,l2),_find(l1,l2+1));
    }
}
/*void print_lcs(int l1,int l2){
    //cout<<l1<<' '<<l2<<' '<<s1.size()<<' '<<s2.size()<<endl;
    if(l1==s1.size()||l2==s2.size()){
        if(ck==0){
            ss=ans;
            ck=1;
        }
        else{
            ss=min(ss,ans);
        }
        return;
    }
    if(s1[l1]==s2[l2]){
        ans+=s1[l1];
        print_lcs(l1+1,l2+1);
        ans.erase(ans.end()-1);
    }
    else{
        if(dp[l1+1][l2]>dp[l1][l2+1])print_lcs(l1+1,l2);
        else if(dp[l1+1][l2]<dp[l1][l2+1]) print_lcs(l1,l2+1);
        else {
            print_lcs(l1+1,l2);
            print_lcs(l1,l2+1);
        }
    }
}*/
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        cin>>s1>>s2;
        memset(dp,-1,sizeof dp);
        //memset(dp2,NULL,sizeof dp2);
        for(int i=0;i<N;i++)for(int j=0;j<N;j++)dp2[i][j].clear();
        int kk=lcs(0,0);
        ans="";
        ck=0;
        //print_lcs(0,0);
        //sort(v.begin(),v.end());
        printf("Case %d: ",++c);
        if(kk==0){
            printf(":(\n");
        }
        else{
            cout<<_find(0,0)<<endl;
            //cout<<ss<<endl;
        }
       /* for(int i=0;i<N;i++)for(int j=0;j<N;j++){
            dp2[i][j].clear();
            //cout<<i<<' '<<j<<endl;
        }*/
        //v.clear();
    }
}
