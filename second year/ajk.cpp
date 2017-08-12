#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    map<char,int>mp;
    cin>>s;
    int r=0,b=0,g=0,y=0,c=0;
    char ck[5];
    for(int i=0;i<s.size();i++){
        if(s[i]!='!')ck[i%4]=s[i];
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='!'){
            if(ck[i%4]=='R')r++;
            else if(ck[i%4]=='B')b++;
            else if(ck[i%4]=='Y')y++;
            else if(ck[i%4]=='G')g++;
        }
    }
    cout<<r<<' '<<b<<' '<<y<<' '<<g<<endl;
}
