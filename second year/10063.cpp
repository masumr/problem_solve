#include<bits/stdc++.h>
using namespace std;
map<char,char>mp,mp1;
int main(){
    string s;
    bool ck=0;
    while(cin>>s){
        if(ck)cout<<endl;
        char ch='a';
        string sk="";
        for(int i=0;i<s.size();i++){
            mp[s[i]]=ch;
            sk+=ch;
            mp1[ch]=s[i];
            ch++;
        }
    vector<string>v;
    v.push_back(sk);
    while(next_permutation(sk.begin(),sk.end())){
        v.push_back(sk);
    }
    for(int i=v.size()-1;i>=0;i--){
        string sp=v[i];
        for(int j=0;j<sp.size();j++){
            cout<<mp1[sp[j]];
        }
        cout<<endl;
    }
    mp.clear();mp1.clear();v.clear();
    ck=1;
    }
}
