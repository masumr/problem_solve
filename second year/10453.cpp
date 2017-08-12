#include<bits/stdc++.h>
using namespace std;
int n;
string lcs(string a,string b,int l){
    int len[l+1][l+1];
    for(int i=0;i<=l;i++){
        for(int j=0;j<=l;j++){
            if(i==0 || j==0)len[i][j]=0;
            else if(a[i-1]==b[j-1])len[i][j]=len[i-1][j-1]+1;
            else len[i][j]=max(len[i-1][j],len[i][j-1]);
        }
    }
    string s="";
    int in=len[l][l];
    n=in;
    //cout<<in<<endl;
    int i=l,j=l;
    while(i>0 && j>0){
        if(a[i-1]==b[j-1]){
            s+=a[i-1];
            in--;i--;j--;
        }
        else if(len[i-1][j]>len[i][j-1])i--;
        else j--;
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string s1,s2;
    while(cin>>s1){
        s2=s1;
        int len=s1.size();
        reverse(s2.begin(),s2.end());
        string ss=lcs(s1,s2,len);
        s1+=s2;
        //cout<<n<<endl;
        //cout<<n<<endl;
        int k=0;
        //cout<<n<<' ';
        cout<<len-n<<' ';
        string s="";
        //cout<<ss<<endl;
        for(int i=0;i<s1.size();i++){
            if(k<=n){
                if(ss[k]==s1[i])k++;
                else s+=s1[i];
            }
            else{
                s+=s1[i];
            }
        }
        if(s[0]==s[1]){
            for(int i=1;i<s.size();i++)cout<<s[i];
            cout<<s[0]<<endl;
        }
        else cout<<s<<endl;
    }
}
