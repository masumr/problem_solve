#include<bits/stdc++.h>
using namespace std;
string s1,s2;
void lcs(int l1,int l2){
    int L[l1+1][l2+1];
    memset(L,0,sizeof L);
    for(int i=0;i<=l1;i++){
        for(int j=0;j<=l2;j++){
            if(i==0||j==0)L[i][j]=0;
            else if(s1[i-1]==s2[j-1])L[i][j]=L[i-1][j-1]+1;
            else{
                L[i][j]=max(L[i-1][j],L[i][j-1]);
            }
        }
    }
    int index=L[l1][l2];
    char ch[index+1];
    ch[index]='\0';
    int i=l1,j=l2;
    index--;
    while(i>0 && j>0){
        if(index<L[i][j]){
            int len=L[i][j];
            ch[len]=min(ch[len],)
        }S
        if(s1[i-1]==s2[j-1]){
            ch[index]=s1[i-1];
            i--;j--;index--;
        }
        else if(L[i-1][j]>L[i][j-1])i--;
        else j--;
    }
}
int main(){
    cin>>s1>>s2;
    lcs(s1.size(),s2.size());
    //cout<<ss<<endl;
}
