#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    bool ck=0;
    for(int i=0;i<s1.size();i++){
        ck=0;
        for(int j=0;j<s2.size();j++){
            if(s1[i+j]!=s2[j]){
                ck=1;
                break;
            }
        }
        if(!ck){
            cout<<"Match"<<endl;
            break;
        }
    }
    if(ck)cout<<"No match"<<endl;
}
