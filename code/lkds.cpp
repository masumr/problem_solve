#include<bits/stdc++.h>
using namespace std;
vector<int>cp(string p){
    int l1=p.size();
    vector<int>v(l1+1);
    int k=0;
    v[0]=0;
    for(int i=0;i<l1;i++){
        while(k>0 && p[k]!=p[i])k=v[k];
        if(p[k]==p[i])k++;
        v[i]=k;
    }
    return v;
}
vector<int>kmp(string s,string p){
    int l1=s.size();
    int l2=p.size();
    vector<int>cpp=cp(p);
    vector<int>mp;
    int q=0;
    for(int i=0;i<l1;i++){
        while(q>0 && p[q]!=s[i])q=cpp[q];
        if(s[i]==p[q])q++;
        if(q==l2){
            mp.push_back(i-l2+1);
        }
    }
    return mp;
}
int main(){
    string s,p;
    cin>>s>>p;
    vector<int>v=kmp(s,p);
    for(int i=0;i<v.size();i++)cout<<v[i]<<' ';
}
