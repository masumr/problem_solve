#include<bits/stdc++.h>
using namespace std;
vector<string>s1,s2;
int dp[1007][1007];
int lcs(int m,int n){
    if(m==0||n==0)return 0;
    if(dp[m][n]!=-1) return dp[m][n];
    if(s1[m-1]==s2[n-1]) return dp[m][n]=1+lcs(m-1,n-1);
    else return dp[m][n]=max(lcs(m-1,n),lcs(m,n-1));
}
int main(){
    string a,b;
    int c=0;
    while(getline(cin,a)){
        getline(cin,b);
        memset(dp,-1,sizeof dp);
        string ss="";
        for(int i=0;i<a.size();i++){
            if((a[i]>='a'&& a[i]<='z')||(a[i]>='A' && a[i]<='Z')||(a[i]>='0' && a[i]<='9')){
                ss+=a[i];
            }
            else{
                s1.push_back(ss);
                ss="";
            }
        }
        if(ss.size()!=0){
            s1.push_back(ss);
        }
        ss="";
        for(int i=0;i<b.size();i++){
            if((b[i]>='a'&& b[i]<='z')||(b[i]>='A' && b[i]<='Z') ||(b[i]>='0' && b[i]<='9')){
                ss+=b[i];
            }
            else{
                s2.push_back(ss);
                ss="";
            }
        }
        if(ss.size()!=0){
            s2.push_back(ss);
        }
        if(s1.size()==0 || s2.size()==0){
            printf("%2d. Blank!\n",++c);
        }
        else{
            int len=lcs(s1.size(),s2.size());
            printf("%2d. Length of longest match: %d\n",++c,len);
        }
        s1.clear();
        s2.clear();
    }
}
