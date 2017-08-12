#include<bits/stdc++.h>
using namespace std;
const int N=81;
string s1,s2;
int dp[N][N];
int ed(int l1,int l2){
    if(l1==0)return l2;
    else if(l2==0)return l1;
    if(dp[l1][l2]!=-1)return dp[l1][l2];
    return dp[l1][l2]=((s1[l1]==s2[l2])?ed(l1-1,l2-1):(1+min(ed(l1-1,l2),min(ed(l1,l2-1),ed(l1-1,l2-1)))));
}
int main(){
    while(cin>>s1>>s2){
        memset(dp,-1,sizeof dp);
        int l1=s1.size(),l2=s2.size();
        cout<<ed(l1,l2)<<endl;
        int c=0;
        //cout<<l1<<' ' <<l2<<endl;
        while(l1>0 || l2>0){
            cout<<l1<<' '<<l2<<endl;;
            if(s1[l1-1]==s2[l2-1]){
                l1--;l2--;
                continue;
            }
            printf("%d ",++c);
            if(l1>0 && dp[l1][l2]==dp[l1-1][l2]+1){
                //cout<<l1<<endl;
               printf("Delete %d", l1);
               l1--;
               s1.erase(l1-1,1);
            }
            else if(l2>0 && dp[l1][l2]==dp[l1][l2-1]+1){
                printf("Insert %d,%c", l1+ 1, s2[l2 - 1]);
                s1.insert(l1,1,s2[l2-1]);
                //cout<<l2<<endl;
                l2--;
            }
            else if( l1>0 && l2>0){
                 printf("Replace %d,%c", l1, s2[l2 - 1]);
                 s1[l1-1]=s2[l2-1];
                 l1--;l2--;
            }
            printf("\n");
            if(c==5)break;
        }
    }
}
