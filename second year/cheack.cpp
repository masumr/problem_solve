#include<cstdio>
#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
//using namespace std;
std::map<char,std::string>mp;
std::vector<std::string>vv;
bool cheack(std::string s){
    std::vector<std::string>v;
    v.clear();
    bool ck=1;
    for(int i=0;i<s.size();i++){
        v.push_back(mp[s[i]]);
        //cout<<mp[s[i]]<<' ';
    }
    int cnt=0;
    for(int i=0;i<v.size()-1;i++){
        std::string s1=v[i],s2=v[i+1];
        cnt=0;
        for(int j=0;j<s1.size();j++){
            if(s1[j]!=s2[j]){
                cnt++;
            }
        }
        //cout<<cnt<<' ';
        if(cnt!=1){
            ck=0;
            break;
        }
    }
    //cout<<ck<<endl;
    return ck;
}
int main(){
    char ch='a';
   std:: string sk="";
   std:: string s;
//std::    cin>>s;
    getline(std::cin,s);
    int j=0;
    while(s[j]!='[')j++;
    std::cout<<s<<std::endl;
    std::string sv="";
    for(int i=j;i<s.size()-1;i++){
        if((s[i]>='a' && s[i]<='z'))sv+=s[i];
        else{
            std::cout<<sv<<' ';
            vv.push_back(sv);
            sv.clear();
        }
    }
    for(int i=0;i<vv.size();i++)std::cout<<vv[i]<<' ';
    for(int i=0;i<vv.size();i++){
        mp[ch]=vv[i];
        sk+=ch;
        ch++;
    }
    bool ck=cheack(sk);
    while(next_permutation(sk.begin(),sk.end())){
        //cout<<sk<<' ';
        ck|=cheack(sk);
        //cout<<cheack(sk)<<endl;
    }
    if(ck)printf("true\n");
    else printf("false\n");
    mp.clear();vv.clear();
    return 0;
}
