#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    cin>>s;
    int mx=0,cnt=0;
    for(int i=1;i<t;i++){
        //cout<<s[i]<<' '<<s[i-1]<<endl;
        if(s[i]==s[i-1])cnt++;
    }
    cout<<cnt<<endl;
}
