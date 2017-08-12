#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    string s="";
    bool ck=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]<s2[i]){
            ck=1;
            break;
        }
        if(s1[i]==s2[i]){
            s+=s1[i];
        }
        else{
            s+=s2[i];
        }
    }
    //cout<<ck<<endl;
    if(!ck)cout<<s<<endl;
    else cout<<-1<<endl;
}
