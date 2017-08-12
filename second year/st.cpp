#include<bits/stdc++.h>
using namespace std;
string s[55];
int n;
int cheack(string sk){
    int cnt=0;
    bool ck=0;
    for(int i=0;i<n;i++){
        string sp=s[i];
        ck=0;
        //cout<<sp<<' ';
        for(int j=0;j<sp.size();j++){
            char ch=sp[0];
            if(sp==sk){
                ck=1;
                break;
            }
            sp.erase(sp.begin());
            cnt++;
            sp+=ch;
            if(sp==sk){
                ck=1;
                break;
            }
            //cout<<sp<<' ';
        }
        if(!ck)return -1;
    }
   // cout<<cnt<<endl;
    return cnt;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>s[i];
    int mx=12345678;
    bool ck=0;
    for(int i=0;i<n;i++){
        int len=cheack(s[i]);
        //cout<<cnt<<endl;
        if(len!=-1){
            ck=1;
            mx=min(mx,len);
        }
    }
    if(ck)cout<<mx<<endl;
    else cout<<-1<<endl;
}
