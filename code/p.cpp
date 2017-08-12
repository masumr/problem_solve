#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(cin>>s){
    bool ss=true;
    int n=s.size();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-(i+1)]){
            ss=false;
            break;
        }
    }
    if(ss==false)cout<<"Not palandiam"<<endl;
    else cout<<"palandiam"<<endl;
    }
}
