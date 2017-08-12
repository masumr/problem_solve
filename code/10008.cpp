#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    map<char,int>mp;
    getchar();
    while(t--){
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            s[i]=toupper((char)s[i]);
            mp[s[i]]++;
        }
    }
    set<int>st;
    vector<int>v;
    //cout<<(char)toupper('a')<<' '<<(char)toupper('A');
    int ss[200];
    for(char i='A';i<='Z';i++){
        if(mp[i]!=0){
            //cout<<i<<' ';
            st.insert(mp[i]);
        }
    }
    for(set<int>::iterator it=st.begin();it!=st.end();it++){
        v.push_back(*it);
    }
    sort(v.begin(),v.end());
    for(int i=v.size()-1;i>=0;i--){
        for(char j='A';j<='Z';j++){
            if(mp[j]==v[i])cout<<j<<' '<<v[i]<<endl;
        }
    }
}
