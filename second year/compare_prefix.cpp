#include<bits/stdc++.h>
using namespace std;
vector<int>compare_prefix(string p){
    int len=p.size();
    vector<int>v(len+1);
    v[0]=0;
    int k=0;
    for(int i=1;i<len;i++){
        while(k>0 and p[k]!=p[i])k=v[k];
        //cout<<k<<' ';
        if(p[k]==p[i])k++;
        v[i]=k;
    }
    return v;
}
vector<int>kmp(string s,string p){
    int l1=s.size();
    int l2=p.size();
    vector<int>prefix=compare_prefix(p);
    vector<int>mp;
    int q=0;
    for(int i=0;i<l1;i++){
        while(q>0 and p[q]!=s[i])q=prefix[q];
        if(s[i]==p[q])q++;
        if(l2==q){
            mp.push_back(i-l2+1);
            q=prefix[q];
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
