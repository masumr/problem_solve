#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main(){
    int cnt=1;
    for(char i='a';i<='z';i++){
        mp[i]=cnt;
        cnt++;
    }
    string s;
    cin>>s;
    int sum=0;
    char ch='a';
    for(int i=0;i<s.size();i++){
        //cout<<s[i]<<' '<<abs(mp[s[i]]-mp[ch])<<' '<<(ch-'a')+('z'-s[i])+1<<endl;
        sum+=min(abs(mp[s[i]]-mp[ch]),min((ch-'a')+('z'-s[i])+1,(s[i]-'a')+('z'-ch)+1));
        ch=s[i];
    }
    cout<<sum<<endl;
}
