#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<cstdio>
//using namespace std;
//typedef long long int ll;
bool ck(std::string s,std::string s1){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=s1[i])cnt++;
    }
    if(cnt==1)return true;
    else return false;
}
int main(){
    std::string s,sv="";
    getline(std::cin,s);
    std::vector<std::string>v;
    int j=0;
    while(s[j]!='"')j++;
    j--;
    for(int i=j;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z')sv+=s[i];
        else{
            if(sv.size())v.push_back(sv);
            sv.clear();
        }
    }
    std::cout<<v.size()<<std::endl;
    std::map<std::string,int>mp;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if(ck(v[i],v[j])==true)mp[v[i]]++;
        }
    }
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(mp[v[i]]<=1)cnt++;
    }
    if(cnt==2)std::cout<<"true"<<std::endl;
    else std::cout<<"false"<<std::endl;
}
