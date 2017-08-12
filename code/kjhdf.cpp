#include<bits/stdc++.h>
using namespace std;
map<int,string>mp;
vector<string>v;
vector<char>ch;
int main(){
    int n,m;
    cin>>n>>m;
    string a;
    for(int i=1;i<=n;i++){
        cin>>a;
        mp[i]=a;
    }
    for(int i=1;i<=m;i++){
        int x;
        cin>>x;
        string s=
        v.push_back(mp[x]);
    }
    //for(int i=0;i<v.size();i++)cout<<v[i]<<' ';cout<<endl;
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i].size()==v[0].size())count++;
    }
    if(count!=v.size())cout<<"No"<<endl;
    else{
        count=0;
        int cc=0;
        string s=v[0];
        for(int i=0;i<s.size();i++){
            for(int i=0;i<v.size();i++){
                if(s[])
            }
        }
        if(count==v[0].size())cout<<"No"<<endl;
        else cout<<1<<endl;
    }
    v.clear();mp.clear();
}
