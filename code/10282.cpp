#include<bits/stdc++.h>
using namespace std;
vector<string>v;
map<string,string>mp;
int main(){
    //cout<<mp["hf"]<<endl;
    string s1,s2[3],a;
    while(getline(cin,s1)){
        if(s1.size()==0) break;
        stringstream ss(s1);
        string s;
        int i=0;
        while(ss>>s) s2[i++]=s;
        mp[s2[1]]=s2[0];
    }
    while(getline(cin,a)){
        if(a.size()==0) break;
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++){
        if(mp[v[i]]=="")cout<<"eh"<<endl;
        else cout<<mp[v[i]]<<endl;
    }
    v.clear();mp.clear();
}
