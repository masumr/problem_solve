#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt=0;
    for(int i=1;i<s.size();i++)if(s[i]>='A' && s[i]<='Z')cnt++;
    if(cnt==s.size()-1){
        for(int i=1;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z')s[i]+=32;
            else s[i]-=32;
        }
    }
    cout<<s<<endl;
}
