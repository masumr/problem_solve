#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c1=0,c2=0;
    bool cc=0,ck=0;
    for(int i=1;i<s.size();i++){
        if(s[i-1]=='A' && s[i]=='B' && !cc){
            cc=1;
            i++;
        }
        else if(s[i-1]=='B' && s[i]=='A' && cc){
            ck=1;
        }

    }
    cc=0;
    for(int i=1;i<s.size();i++){
        if(s[i]=='A' && s[i-1]=='B' && !cc){
            cc=1;
            i++;
        }
        else if(s[i]=='B' && s[i-1]=='A' && cc){
            ck=1;
        }

    }


    //cout<<c1<<' '<<c2<<endl;
    if(ck)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
