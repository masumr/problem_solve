#include<bits/stdc++.h>
using namespace std;
bool ck(string s){
    string sp=s;
    reverse(sp.begin(),sp.end());
    if(s==sp)return true;
    else return false;
}
int main(){
    string s;
    cin>>s;
    int l=s.size()-1;
    bool ckk=0;
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[l-i]){
            char ch=s[i];
            s[i]=s[l-i];
            if(ck(s)){
               ckk=1;
               break;
            }
            s[i]=ch;
        }
    }
    string sp=s;
    reverse(sp.begin(),sp.end());
    if((ckk))cout<<"YES"<<endl;
    else {
        if(l%2==0 && sp==s)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
