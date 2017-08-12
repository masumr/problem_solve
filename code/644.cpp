#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

char temp[100];
vector <string>v;
int i,j,k,cnt;

bool check(string x,string y){
    if(x.length()>y.length()) return false;
    for(int i=0;i<x.length();i++)
        if(x[i]!=y[i]) return false;
    return true;
}
int main(){
 cnt=0;
 while(scanf("%s",temp)==1){
    bool ck=0;
    v.push_back(temp);
    while(1){
       cin>>temp;
       if(!strcmp(temp,"9")) break;
       v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i++){
        if(check(v[i-1],v[i])){
            ck=1;
            break;
        }
    }
    if(!ck) printf("Set %d is immediately decodable\n",++cnt);
    else     printf("Set %d is not immediately decodable\n",++cnt);
 }
}
