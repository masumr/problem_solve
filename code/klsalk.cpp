#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    map<char,int>mp;
    cin>>s;
    int r=0,b=0,g=0,y=0,c=0;
    int r1=0,b1=0,g1=0,y1=0;
    int n=(s.size()/4)*4;
    for(int j=0;j<n;j++){
       if(s[j]=='R')r++;
        else if(s[j]=='B')b++;
        else if(s[j]=='Y')y++;
        else if(s[j]=='G')g++;
        else c++;
    }
    r1=n/4-r;b1=n/4-r;g1=n/4-r;y1=n/4-r;
    string kk="";
    int len=s.size();
    string ss="";
    ss+=s[len-1]+s[len-2]+s[len-3]+s[len-4];
    int rr,bb,yy,gg;
    for(int j=0;j<ss.size();j++){
        if(kk[j]=='R')r++;
        else if(kk[j]=='B')b++;
        else if(kk[j]=='Y')y++;
        else if(kk[j]=='G')g++;
    }
    //cout<<r<<'  '<<b<<' '<<y<<' '<<g<<endl;
    if(s.size()%4==3)kk+=s[n]+s[n+1]+s[n+2];
    else if(s.size()%4==2)kk+=s[n]+s[n+1];
    else if(s.size()%4==1)kk+=s[n];
    //cout<<kk<<' '<<s[len-0-5]<<endl;
    for(int i=0;i<kk.size();i++){
        if(kk[i]=='!'){
            if(s[len+i-5]=='R')r1++;
            else if(s[len+i-5]=='B')b1++;
            else if(s[len+i-5]=='Y')y1++;
            else if(s[len+i-5]=='G')g1++;
            else{
                //cout<<ss<<endl;
                if(!r)r1++;
                if(!b)b1++;
                if(!y)y1++;
                if(!g)g1++;
            }
        }
    }
    cout<<r1<<' '<<b1<<' '<<y1<<' '<<g1<<endl;
}
