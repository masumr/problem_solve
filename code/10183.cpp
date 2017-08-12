#include<bits/stdc++.h>
using namespace std;
#define lim 5001
#define len 1050
int fib[lim][len];
void fibb(){
    fib[0][0]=0;
    fib[1][0]=1;
    fib[2][0]=2;
    int n=1;
    for(int i=3;i<lim;i++){
        for(int j=0;j<len;j++){
            fib[i][j]+=fib[i-1][j]+fib[i-2][j];
            if(fib[i][j]>=10){
                fib[i][j+1]=fib[i][j]/10;
                fib[i][j]%=10;
            }
        }
    }
}
int check(string aa,string bb){
    if(aa.size()<bb.size())return 1;
    if(aa.size()>bb.size())return 2;
    for(int i=0;i<aa.size();i++){
        if(aa[i]<bb[i])return 1;
        if(aa[i]>bb[i])return 2;
    }
    return 3;
}
int main(){
    vector<string>s;
    int j,i;
    fibb();
    for(i=1;i<lim;i++){
        string sa="";
        for(j=len-1;j>0;j--)if(fib[i][j]!=0)break;
        while(j>=0){
            sa+=(char)(fib[i][j]+48);
            j--;
        }
      s.push_back(sa);
    }
    string a,b;
    while(cin>>a>>b){
        if(a=="0" && b=="0")break;
        int count=0;
        int cas=check(a,b);
        if(cas==2){
            int i=0;
            while(i<s.size()){
            int ch=check(b,s[i]);
            if(ch==1)break;
            count++;
            i++;
        }
        cout<<count<<endl;
        return 0;
        }
        for(i=0;i<s.size();i++){
            int ch=check(a,s[i]);
            if(ch==1){
                break;
            }
            if(ch==3){break;}
        }
        while(i<s.size()){
            int ch=check(b,s[i]);
            if(ch==1)break;
            count++;
            i++;
        }
        cout<<count<<endl;
    }
}
