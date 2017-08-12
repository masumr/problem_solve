#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int o=0,z=0,mx=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            mx=max(mx,z);
            o++;
            z=0;
        }
        else{
            mx=max(mx,o);
            z++;
            o=0;
        }
    }
    mx=max(mx,max(o,z));
    cout<<mx<<endl;
}
