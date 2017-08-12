#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[101];
    string s;
    cin>>s;
    int r=0,b=0,g=0,y=0,c=0;
    int r1=0,b1=0,g1=0,y1=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='!'){
            string ss="";
            if(i>3){
                int k=i-3;
                for(int j=k;j<i;j++)ss+=s[j];
            }
            else{
                for(int j=0;j<=i;j++)ss+=s[j];
                for(int j=i;j<4;j++){ss+=s[j];i++;}
            }
            for(int j=0;j<4;j++){
                if(ss[j]=='R')r++;
                else if(ss[j]=='B')b++;
                else if(ss[j]=='Y')y++;
                else if(ss[j]=='G')g++;
                else c++;
            }
            if(c){
                cout<<ss<<endl;
                if(!r)r1++;
                if(!b)b1++;
                if(!y)y1++;
                if(!g)g1++;
                r=0,b=0,y=0,g=0;
                    //cout<<i<<' ';
            }
        }
    }
    cout<<endl;
     cout<<r1<<' '<<b1<<' '<<y1<<' '<<g1<<endl;
}
