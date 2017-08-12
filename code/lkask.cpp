#include<bits/stdc++.h>
using namespace std;
string ch;
vector<char>v;
int t[100];
void call(){
    if(v.size()==ch.size()){
        for(int i=0;i<ch.size();i++)cout<<v[i];
        cout<<endl;
        return;
    }
    for(int i=0;i<ch.size();i++){
        if(!t[i]){
            t[i]=1;v.push_back(ch[i]);
            call();
            t[i]=0;v.pop_back();
        }
    }
}
int main(){
    memset(t,0,sizeof t);
    cin>>ch;
    call();
}
